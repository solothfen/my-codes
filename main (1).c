#include <stdio.h>
#include <math.h>
int main()
{
    unsigned int x;
    int a=0,b=0,c=0,d=0,i,g[32],k;
    scanf("%d",&x);
    for(i=0;i<32;i++,x/=2)
        g[i]=x%2;
    for(i=0;i<8;i++)
        d+=g[i]*pow(2,i);
    for(i=8,k=0;i<16;i++,k++)
        c+=g[i]*pow(2,k);
    for(i=16,k=0;i<24;i++,k++)
        b+=g[i]*pow(2,k);
    for(i=24,k=0;i<32;i++,k++)
        a+=g[i]*pow(2,k);
    printf("%d.%d.%d.%d\n",a,b,c,d);
    return 0;
}
