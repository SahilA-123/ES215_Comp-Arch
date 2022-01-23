#include <bits/stdc++.h>
#include <sys/time.h>

using namespace std;
typedef long long ll;

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

long gettime(){
    struct timeval start;
    gettimeofday(&start, NULL);

    return start.tv_sec*1000000 + start.tv_usec;
}

__int128 fibonacci(__int128 n){
    if (n == 0 || n == 1){
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    long start = gettime();

    for (__int128 i = 0; i <= 100; i++){
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    
    long end = gettime();

    cout << end - start;

    return 0;
}
