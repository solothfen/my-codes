#include<stdio.h>
#include<math.h>
int primer(int n){
    int i = 2,flag = 1;
    if(n == 1){
        flag = 0;
    }else if(n == 2){
        flag = 1;
    }else{
        for(;i<=sqrt(n)+1;i++){
            if(n%i==0){
                flag = 0;
                break;
            }
        }
    }
    return flag;
}
int main()
{
    int i = 4,a;
    for(;i<=100;i = i+2){
        for(a = 2;a<=i-2;a++){
            if(primer(a)&&primer(i-a)){
                printf("%d=%d+%d\n",i,a,i-a);
                break;
            }
        }
    }
    return 0;
}

