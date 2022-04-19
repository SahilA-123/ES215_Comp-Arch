#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    const int N = 256;
    double A[N][N];
    double B[N][N];
    double C[N][N];

    for(int i = 0;i < N;i ++){
        for(int j = 0;j < N;j ++){
            A[i][j] = rand()/2.54;
            B[i][j] = rand()/2.12;
        }
    }

    struct timespec ts1;
    struct timespec ts21;
    char start1[100];
    char end1[100];
    timespec_get(&ts1,TIME_UTC);

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            for(int k = 0; k < N; k++) {
                C[i][j] = C[i][j] +(A[i][k]*B[k][j]);
            }
        }
    }

    timespec_get(&ts21,TIME_UTC);
    strftime(start1, sizeof start1, "%D %T", gmtime(&ts1.tv_sec));    
    printf("%s.%09ld\n",start1,ts1.tv_nsec);
    strftime(end1, sizeof end1, "%D %T", gmtime(&ts21.tv_sec));    
    printf("%s.%09ld\n",end1,ts21.tv_nsec);

    for(int i = 0; i < N;i ++){
        for(int j = 0; j < N;j ++){
            A[i][j] = rand()/2.54;
            B[i][j] = rand()/2.12;
        }
    }

    struct timespec ts2;
    struct timespec ts22;
    char start2[100];
    char end2[100];
    timespec_get(&ts2,TIME_UTC);

    for(int i = 0; i < N; i++) {
        for(int k = 0; k < N; k++) {
            for(int j = 0; j < N; j++) {
                C[i][j] = C[i][j] +(A[i][k]*B[k][j]);
            }
        }
    }

    timespec_get(&ts22,TIME_UTC);
    strftime(start2, sizeof start2, "%D %T", gmtime(&ts2.tv_sec));    
    printf("%s.%09ld\n",start2,ts2.tv_nsec);
    strftime(end2, sizeof end2, "%D %T", gmtime(&ts22.tv_sec));    
    printf("%s.%09ld\n",end2,ts22.tv_nsec);


    for(int i = 0; i < N;i ++){
        for(int j = 0; j < N;j ++){
            A[i][j] = rand()/2.54;
            B[i][j] = rand()/2.12;
        }
    }

    struct timespec ts3;
    struct timespec ts23;
    char start3[100];
    char end3[100];
    timespec_get(&ts3,TIME_UTC);

    for(int j = 0; j < N; j++) {
        for(int i = 0; i < N; i++) {
            for(int k = 0; k < N; k++) {
                C[i][j] = C[i][j] +(A[i][k]*B[k][j]);
            }
        }
    }

    timespec_get(&ts23,TIME_UTC);
    strftime(start3, sizeof start3, "%D %T", gmtime(&ts3.tv_sec));    
    printf("%s.%09ld\n",start3,ts3.tv_nsec);
    strftime(end3, sizeof end3, "%D %T", gmtime(&ts23.tv_sec));    
    printf("%s.%09ld\n",end3,ts23.tv_nsec);

    for(int i = 0; i < N;i ++){
        for(int j = 0; j < N;j ++){
            A[i][j] = rand()/2.54;
            B[i][j] = rand()/2.12;
        }
    }

    struct timespec ts4;
    struct timespec ts24;
    char start4[100];
    char end4[100];
    timespec_get(&ts4,TIME_UTC);

    for(int j = 0; j < N; j++) {
        for(int k = 0; k < N; k++) {
            for(int i = 0; i < N; i++) {
                C[i][j] = C[i][j] +(A[i][k]*B[k][j]);
            }
        }
    }

    timespec_get(&ts24,TIME_UTC);
    strftime(start4, sizeof start4, "%D %T", gmtime(&ts4.tv_sec));    
    printf("%s.%09ld\n",start4,ts4.tv_nsec);
    strftime(end4, sizeof end4, "%D %T", gmtime(&ts24.tv_sec));    
    printf("%s.%09ld\n",end4,ts24.tv_nsec);

    for(int i = 0; i < N;i ++){
        for(int j = 0; j < N;j ++){
            A[i][j] = rand()/2.54;
            B[i][j] = rand()/2.12;
        }
    }

    struct timespec ts5;
    struct timespec ts25;
    char start5[100];
    char end5[100];
    timespec_get(&ts5,TIME_UTC);

    for(int k = 0; k < N; k++) {
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                C[i][j] = C[i][j] +(A[i][k]*B[k][j]);
            }
        }
    }

    timespec_get(&ts25,TIME_UTC);
    strftime(start5, sizeof start5, "%D %T", gmtime(&ts5.tv_sec));    
    printf("%s.%09ld\n",start5,ts5.tv_nsec);
    strftime(end5, sizeof end5, "%D %T", gmtime(&ts25.tv_sec));    
    printf("%s.%09ld\n",end5,ts25.tv_nsec);

    for(int i = 0; i < N;i ++){
        for(int j = 0; j < N;j ++){
            A[i][j] = rand()/2.54;
            B[i][j] = rand()/2.12;
        }
    }

    struct timespec ts6;
    struct timespec ts26;
    char start6[100];
    char end6[100];
    timespec_get(&ts6,TIME_UTC);

    for(int k = 0; k < N; k++) {
        for(int j = 0; j < N; j++) {
            for(int i = 0; i < N; i++) {
                C[i][j] = C[i][j] +(A[i][k]*B[k][j]);
            }
        }
    }

    timespec_get(&ts26,TIME_UTC);
    strftime(start6, sizeof start6, "%D %T", gmtime(&ts6.tv_sec));    
    printf("%s.%09ld\n",start6,ts6.tv_nsec);
    strftime(end6, sizeof end6, "%D %T", gmtime(&ts26.tv_sec));    
    printf("%s.%09ld\n",end6,ts26.tv_nsec);

    return 0;
    
}