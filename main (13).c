#include<stdio.h>
int oppo(int n){
    int result = 0;
    while(n!=0){
        result*=10;
        result +=n%10;
        n/=10;
    }
    return result;
}
int main()
{
    int n,num,max,yuan;
    scanf("%d",&n);
    scanf("%d",&num);
    max = oppo(num);
    yuan = num;
    for(int i = 2;i<=n;i++){
        scanf("%d",&num);
        if(oppo(num)>max){
            max = oppo(num);
            yuan = num;
        }
    }
    printf("%d",yuan);
    return 0;
}
