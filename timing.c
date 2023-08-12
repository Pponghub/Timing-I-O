#include <stdio.h>
#include<time.h>

int main(){
    int n=1,m=1;

    double time_spent1 = 0.0;
    clock_t begin1 = clock();
    for(int i=0;i<500000;i++){
        n=n+1;
        printf("%d",n);
    }
    clock_t end1 = clock();
    time_spent1 += (double)(end1 - begin1) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds", time_spent1);

    double time_spent2 = 0.0;
    clock_t begin2 = clock();
    for(int i=0;i<500000;i++){
        m=m+1;
    }
    clock_t end2 = clock();
    time_spent2 += (double)(end2 - begin2) / CLOCKS_PER_SEC;
    printf("The elapsed time is %0.15f seconds", time_spent1);
    return 0;
}