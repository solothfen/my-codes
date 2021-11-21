#include<stdio.h>
int main()
{
    int i = 0,j = 0,k = 0,km = 0,flag = 1,judge = 0;
    char fruit[100],customer[100],plate[100];
    int n,num_A = 0,num_X = 0;
    scanf("%d",&n);
    for(int l = 0;l<n;l++){
        scanf("%1s",&fruit[l]);
        if(fruit[l] == 'A'){
            num_A++;
        }
    }
    for(int l = 0;l<n;l++){
        scanf("%1s",&customer[l]);
        if(customer[l] == 'X'){
            num_X++;
        }
    }
    if(num_X>num_A){
        flag = 0;
    }
    
    for(;j<n;j++){
        if(customer[j] == 'X'){
            while(fruit[i] != 'A'){
                plate[k] = fruit[i];
                i++;
                km++;
                if(i == n){
                    flag = 0;
                    break;
                }
                k++;
            }
            j++;
        }else if(customer[j] == 'Y'){
            k = 0;
            for(;k<km;k++){
                if(plate[k] == 'B'){
                    plate[k] = 0;
                    j++;
                    judge = 1;
                }
            }
            if(judge == 0){
                j++;
                i++;
            }
        }
    }
    if(flag){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
