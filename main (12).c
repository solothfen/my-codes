#include<stdio.h>
int main()
{
    int x,y;
    int a,b,c,d;
    scanf("%d %d",&x,&y);
    a = x+y;
    b = x-y;
    c = x*y;
    d = x/y;
    
    if(a>b&&a>c&&a>d){
        printf("%d+%d=%d",x,y,a);
    }else if(b>a&&b>c&&b>d){
        printf("%d-%d=%d",x,y,b);
    }else if(c>a&&c>b&&c>d){
        printf("%d*%d=%d",x,y,c);
    }else if(d>a&&d>b&&d>c){
        printf("%d/%d=%d",x,y,d);
    }else if(a==b&&a>c&&a>d){
        printf("%d+%d=%d\n%d-%d=%d",x,y,a,x,y,b);
    }else if(a==c&&a>b&&a>d){
        printf("%d+%d=%d\n%d*%d=%d",x,y,a,x,y,c);
    }else if(a==d&&a>b&&a>c){
        printf("%d+%d=%d\n%d/%d=%d",x,y,a,x,y,d);
    }else if(b==c&&b>a&&b>d){
        printf("%d-%d=%d\n%d*%d=%d",x,y,b,x,y,c);
    }else if(b==d&&b>a&&b>c){
        printf("%d-%d=%d\n%d/%d=%d",x,y,b,x,y,d);
    }else if(c==d&&c>a&&c>b){
        printf("%d*%d=%d\n%d/%d=%d",x,y,c,x,y,d);
    }else if(a==b&&b==c&&a>d){
        printf("%d+%d=%d\n%d-%d=%d\n%d*%d=%d",x,y,a,x,y,b,x,y,c);
    }else if(a==b&&b==d&&a>c){
        printf("%d+%d=%d\n%d-%d=%d\n%d*%d=%d",x,y,a,x,y,b,x,y,d);
    }else if(a==c&&c==d&&a>b){
        printf("%d+%d=%d\n%d*%d=%d\n%d/%d=%d",x,y,a,x,y,c,x,y,d);
    }else if(b==c&&c==d&&b>a){
        printf("%d-%d=%d\n%d*%d=%d\n%d/%d=%d",x,y,b,x,y,c,x,y,d);
    }else if(a==b&&b==c&&c==d){
        printf("%d+%d=%d\n%d-%d=%d\n%d*%d=%d\n%d/%d=%d",x,y,a,x,y,b,x,y,c,x,y,d);
    }
    return 0;
}
