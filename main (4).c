#include<stdio.h>
int main()
{
    int fib[20] = {1,1};
    int i;
    printf("%d %d ",fib[0],fib[1]);
    for(i = 2;i<20;i++){
        fib[i] = fib[i-1]+fib[i-2];
        printf("%d ",fib[i]);
    }

}
