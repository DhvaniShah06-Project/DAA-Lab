//fibonaci
#include "stdio.h"
#include "time.h"

int fib(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}


void main(){
    int n;
    printf("Enter the nth term of fibbonaci series : ");
    scanf("%d",&n);
    time_t start,end;
    start = clock();
    printf("Fibonaci series  %d term is : %d\n",n,fib(n));
    end = clock();
    double time_taken = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Time taken : %f seconds",time_taken);



}