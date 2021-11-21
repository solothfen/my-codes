#include<stdio.h>
int main ()
{
    int i,n,m,s;

    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(m=1,s=1;m<=i;m++,s++){
                if(s==10){
                    s=s-9;
                }
            printf("%d",s);
        }
        printf("\n");
    }

    return 0;
}
