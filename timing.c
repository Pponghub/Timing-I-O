#include <stdio.h>
#include<time.h>

int main(){
    int n=0,m=0;
    time_t begin1 = time(NULL);
    for(int i=0;i<1000000;i++){
        n+=1;
        printf("%d",n);
    }
    time_t end1 = time(NULL);
    printf("\n");
    printf("The elapsed time is %d seconds", (end1 - begin1));

    time_t begin2 = time(NULL);
    for(int i=0;i<1000000;i++){
        m+=1;
    }
    time_t end2 = time(NULL);
    printf("\n");
    printf("The elapsed time is %d seconds", (end2 - begin2));
    return 0;
}