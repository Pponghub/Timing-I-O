#include <stdio.h>
#include<time.h>

int main(){
    int n;
    time_t begin = time(NULL);
    for(int i=0;i<1000000;i++){
        n=n+1;
        printf("%d",&n);
    }
    time_t end = time(NULL);
    printf("\n");
    printf("The elapsed time is %d seconds", (end - begin));
    return 0;
}