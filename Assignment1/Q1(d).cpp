#include <bits/stdc++.h>
#include <sys/time.h>

using namespace std;
typedef long long int ll;

std::ostream&
operator<<( std::ostream& dest, __int128_t value )
{
    std::ostream::sentry s( dest );
    if ( s ) {
        __uint128_t tmp = value < 0 ? -value : value;
        char buffer[ 128 ];
        char* d = std::end( buffer );
        do
        {
            -- d;
            *d = "0123456789"[ tmp % 10 ];
            tmp /= 10;
        } while ( tmp != 0 );
        if ( value < 0 ) {
            -- d;
            *d = '-';
        }
        int len = std::end( buffer ) - d;
        if ( dest.rdbuf()->sputn( d, len ) != len ) {
            dest.setstate( std::ios_base::badbit );
        }
    }
    return dest;
}

struct timespec;

time_t clock1;
time_t clock2;

__int128 A[1000] = {0};

__int128 fibonacci(__int128 n){

    if (n == 0 || n == 1){
        return n;
    } 
    else if (A[n] != 0){
        return A[n];
    } 
    else {
        __int128 i = 1;
        __int128 prev_value = 0;
        __int128 curr_value = 1;

        while (i < n + 1){
            while (A[i] != 0){
                prev_value = A[i - 1];
                curr_value = A[i];
                i++;
            }

            __int128 temp = curr_value;
            curr_value += prev_value;
            A[i] = curr_value;
            prev_value = temp;

            i++;
        }
        return curr_value;
    }
}

int main() {
    clock1 = clock();

    A[0] = 0;
    A[1] = 1;
    for (__int128 i = 0; i <= 100; i++){
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    clock2 = clock() - clock1;
    float CPU_time = (float)clock2 / CLOCKS_PER_SEC;
    cout << "The time taken by the program is:" << " " << CPU_time << endl;

    return 0;
}
