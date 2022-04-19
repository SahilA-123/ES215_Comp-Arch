#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    const int N = 512;
    double A[N][N];
    double B[N][N];
    double C[N][N];

    for(int i = 0;i < N;i ++){
        for(int j = 0;j < N;j ++){
            A[i][j] = rand()/2.54;
            B[i][j] = rand()/2.12;
        }
    }

    clock_t t1;
    t1 = clock();

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            for(int k = 0; k < N; k++) {
                C[i][j] = C[i][j] +(A[i][k]*B[k][j]);
            }
        }
    }

    t1 = clock() - t1;

    double time_taken1 = ((double)t1)/CLOCKS_PER_SEC;
    printf("execution time is %f seconds for the order i,j,k \n", time_taken1);

    for(int i = 0; i < N;i ++){
        for(int j = 0; j < N;j ++){
            A[i][j] = rand()/2.54;
            B[i][j] = rand()/2.12;
        }
    }

    clock_t t2;
    t2 = clock();

    for(int i = 0; i < N; i++) {
        for(int k = 0; k < N; k++) {
            for(int j = 0; j < N; j++) {
                C[i][j] = C[i][j] +(A[i][k]*B[k][j]);
            }
        }
    }

    t2 = clock() - t2;

    double time_taken2 = ((double)t2)/CLOCKS_PER_SEC;
    printf("execution time is %f seconds for the order i,k,j \n", time_taken2);

    for(int i = 0; i < N;i ++){
        for(int j = 0; j < N;j ++){
            A[i][j] = rand()/2.54;
            B[i][j] = rand()/2.12;
        }
    }

    clock_t t3;
    t3 = clock();

    for(int j = 0; j < N; j++) {
        for(int i = 0; i < N; i++) {
            for(int k = 0; k < N; k++) {
                C[i][j] = C[i][j] +(A[i][k]*B[k][j]);
            }
        }
    }

    t3 = clock() - t3;

    double time_taken3 = ((double)t3)/CLOCKS_PER_SEC;
    printf("execution time is %f seconds for the order j,i,k \n", time_taken3);

    for(int i = 0; i < N;i ++){
        for(int j = 0; j < N;j ++){
            A[i][j] = rand()/2.54;
            B[i][j] = rand()/2.12;
        }
    }

    clock_t t4;
    t4 = clock();

    for(int j = 0; j < N; j++) {
        for(int k = 0; k < N; k++) {
            for(int i = 0; i < N; i++) {
                C[i][j] = C[i][j] +(A[i][k]*B[k][j]);
            }
        }
    }

    t4 = clock() - t4;

    double time_taken4 = ((double)t4)/CLOCKS_PER_SEC;
    printf("execution time is %f seconds for the order j,k,i \n", time_taken4);

    for(int i = 0; i < N;i ++){
        for(int j = 0; j < N;j ++){
            A[i][j] = rand()/2.54;
            B[i][j] = rand()/2.12;
        }
    }

    clock_t t5;
    t5 = clock();

    for(int k = 0; k < N; k++) {
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                C[i][j] = C[i][j] +(A[i][k]*B[k][j]);
            }
        }
    }

    t5 = clock() - t5;

    double time_taken5 = ((double)t5)/CLOCKS_PER_SEC;
    printf("execution time is %f seconds for the order k,i,j \n", time_taken5);

    for(int i = 0; i < N;i ++){
        for(int j = 0; j < N;j ++){
            A[i][j] = rand()/2.54;
            B[i][j] = rand()/2.12;
        }
    }

    clock_t t6;
    t6 = clock();

    for(int k = 0; k < N; k++) {
        for(int j = 0; j < N; j++) {
            for(int i = 0; i < N; i++) {
                C[i][j] = C[i][j] +(A[i][k]*B[k][j]);
            }
        }
    }

    t6 = clock() - t6;

    double time_taken6 = ((double)t6)/CLOCKS_PER_SEC;
    printf("execution time is %f seconds for the order k,j,i \n", time_taken6);

    return 0;
    
}