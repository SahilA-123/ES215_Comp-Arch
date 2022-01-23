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

__int128 fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    clock1 = clock();

    for (int i = 0; i < 100; i++)
    {
        cout << i + 1 << " ";
        cout << fibonacci(i) << " ";
        cout << endl;
    }
    clock2 = clock() - clock1;

    float CPU_time = (float)clock2 / CLOCKS_PER_SEC;

    cout << "The time taken by the program is:" << " " << CPU_time << endl;

    return 0;
}
