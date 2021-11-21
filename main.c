#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
    
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int fib( int n){
    if(n<=0){
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        return fib(n-1)+fib(n-2);
    }
}
void PrintFN( int m,int n){
    int flag = 0;
    int j = 0;
    for(int i = 1;fib(i)<=n;i++){
        if(fib(i)>=m&&fib(i)<=n){
            printf("%d",fib(i));
            flag = 1;
            j = i+1;
            break;
        }
    }
    for(;fib(j)<=n;j++){
        if(fib(j)>=m&&fib(j)<=n){
            printf(" %d",fib(j));
            flag = 1;
        }
    }
    if(flag == 0){
        printf("No Fibonacci number");
    }
}
