#include<stdio.h>
int oppo(int n){
    int result = 0;
    while(n != 0){
        result *=10;
        result = result+n%10;
        n /=10;
    }
    return result;
}
int main()
{
    int n,num;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        scanf("%d",&num);
        
        printf("%d",oppo(num));
    }
    return 0;
}
