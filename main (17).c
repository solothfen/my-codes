#include<stdio.h>
int main()
{
    double PI = 0,fz = 1,fm = 1,item = 1;
    double eps;
    scanf("%le", &eps);
    if(eps>=1){
        printf("PI = 2.0000000");
    }else{
        for(int i = 1;item>=eps;i++){
            PI +=item;
            fz*=i;
            fm*=(2*i+1);
            item = fz/fm;
        }
        PI = PI+item;
        printf("PI = %.7f",2*PI);
    }

    return 0;
}
