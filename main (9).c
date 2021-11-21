#include<stdio.h>
int main()
{
    float x;

    while(scanf("%f",&x)!=EOF){
        if(x>100||x<0){
            printf("Error\n");
        }else{
            switch((int)x/10){
            case 10:printf("A\n");break;
            case 9:printf("A\n");break;
            case 8:printf("B\n");break;
            case 7:printf("C\n");break;
            case 6:printf("D\n");break;
            default:printf("E\n");break;
            }
        }
    }
    return 0;
}
