#include <stdio.h>

int main() {

    long double a = 0, b = 1;
    
    //cout << a << " ";
    printf("%Lf",a);
    for (int i = 1; i <= 100; i++){
        //cout << b << " ";
        printf("%Lf\n",b);
        long double c = a;
        a = b;
        b = b + c;
    }
    return 0;
}
