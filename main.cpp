#include<stdio.h>
int main()
{
    int a[6],n,i,time = 0;
    scanf("%d",&n);
    if(n<0){
        printf("fu ");
        n = -1*n;
    }
    if(n == 0){
        printf("ling");
    }else{
    int num = n;
    while(num!=0){
        time++;
        num = num/10;
    }
    for(i = 0;i<time;i++){
        a[i] = n%10;
        n = n/10;
    }
    for(i = time-1;i>=0;i--){
        if(time == 1){
            switch(a[i]){
                case 0:printf("ling");break;
                case 1:printf("yi");break;
                case 2:printf("er");break;
                case 3:printf("san");break;
                case 4:printf("si");break;
                case 5:printf("wu");break;
                case 6:printf("liu");break;
                case 7:printf("qi");break;
                case 8:printf("ba");break;
                case 9:printf("jiu");break;
            }
        }else{
            if(i == time-1){
        switch(a[time-1]){
            case 0:printf("ling");break;
            case 1:printf("yi");break;
            case 2:printf("er");break;
            case 3:printf("san");break;
            case 4:printf("si");break;
            case 5:printf("wu");break;
            case 6:printf("liu");break;
            case 7:printf("qi");break;
            case 8:printf("ba");break;
            case 9:printf("jiu");break;
        }
            }else{
                switch(a[i]){
                    case 0:printf(" ling");break;
                    case 1:printf(" yi");break;
                    case 2:printf(" er");break;
                    case 3:printf(" san");break;
                    case 4:printf(" si");break;
                    case 5:printf(" wu");break;
                    case 6:printf(" liu");break;
                    case 7:printf(" qi");break;
                    case 8:printf(" ba");break;
                    case 9:printf(" jiu");break;
                }
            }
    }
    }
    }
    return 0;
}
