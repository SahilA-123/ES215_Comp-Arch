#include <bits/stdc++.h>
#include <sys/time.h>

using namespace std;
typedef long long ll;

struct timespec;

time_t clock1;
time_t clock2;

// long gettime(){
//     struct timeval start;
//     gettimeofday(&start, NULL);

//     return start.tv_sec*1000000 + start.tv_usec;
// }

int main()
{
    // long start = gettime();

    clock1 = clock();
    

    srand(time(0));
    int n; cin >> n;
    int arr1[n][n], arr2[n][n], res[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arr1[i][j] = (rand() % (11));
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arr2[i][j] = (rand() % (11));
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            res[i][j] = 0;
            for (int k = 0; k < n; k++){
                final_array[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << res[i][j] << "\t";
        }
        cout << "\n";
    }

    clock2 = clock() - clock1;
    float CPU_time = (float)clock2 / CLOCKS_PER_SEC;
    cout << "The time taken by the program is:" << " " << CPU_time << endl;

    // long end = gettime();
    // cout << end - start;

    return 0;
}
