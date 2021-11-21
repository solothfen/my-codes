#include<stdio.h>
#include<math.h>
long long int gcd(long long int a,long long int b)
{
    long long int r;
    r=b%a;
    while(r!=0)
    {
        b=a;a=r;r=b%a;
    }
    return a;
}
int main()
{
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    long long int x1,x2,y1,y2;
    long long int j,count1[2000]={0},count2[2000]={0},cc=0;
//count数组用于存放gcd对个数
    for(x1=a;x1<b;x1++)
    {
        for(y1=x1+1;y1<=b;y1++)
        {
            j=gcd(x1,y1);
            count1[j]++;
        }
    }
    for(x2=c;x2<d;x2++)
    {
        for(y2=x2+1;y2<=d;y2++)
        {
            j=gcd(x2,y2);
            count2[j]++;
        }
    }

    for(j=1;j<2000;j++)
        cc=cc+count1[j]*count2[j];
    printf("%lld",cc);
}

