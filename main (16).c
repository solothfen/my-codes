#include<stdio.h>
int fib(int n){
    int a,b,mark = 0;
    if(n == 1||n == 2){
        mark = 1;
    }else{
        a = 1;
        b = 1;
        for(int i = 3;i<=n;i++){
            mark = a+b;
            a = b;
            b = mark;
        }
    }
    return mark;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d/%d",fib(n+2),fib(n+1));
    return 0;
}
