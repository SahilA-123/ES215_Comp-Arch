#include <bits/stdc++.h>
#include <sys/time.h>


using namespace std;
typedef long long int ll;

struct timespec;

time_t clock1;
time_t clock2;

int main()
{   
    int n;
    cin >> n;

    double A[n][n], B[n][n];
    double res[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            A[i][j] = (rand() % (15));
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            B[i][j] = (rand() % (15));
        }
    }

    clock1 = clock();

    // resultant matrix
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            res[i][j] = 0;
            for (int k = 0; k < n; k++){
                res[i][j] = res[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << res[i][j] << "\t";
        }
        cout << endl;
    }

    clock2 = clock() - clock1;

    float CPU_time = (float)clock2 / CLOCKS_PER_SEC;
    cout << "The time taken by the meat portion of the program is:" << " " << CPU_time << endl;

}
