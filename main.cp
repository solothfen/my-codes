#include<stdio.h>
int main()
{
    int n,a[10][10];
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int lmax[10],h[10],l[10];
    int flag = 1,key = 0;
    for(int i = 0;i<n;i++){
        flag = 1;
        lmax[i] = a[i][0];
        h[i] = i;
        l[i] = 0;
        for(int j = 0;j<n;j++){
            if(a[i][j]>lmax[i]){
                lmax[i] = a[i][j];
                h[i] = i;
                l[i] = j;
            }
        }
        for(int k = 0;k<n;k++){
            if(a[k][l[i]]<lmax[i]){
                flag = 0;
                break;
            }
        }
        if(flag){
            key = 1;
            printf("%d %d\n",h[i],l[i]);
        }
    }
    if(key == 0){
        printf("NONE");
    }
    return 0;
}
