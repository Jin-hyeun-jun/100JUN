#include <stdio.h>
int main() 
{
    int a,b,c,d;
    int i = 0;
    c = 10000000;
    d = 0;
    while(i<7)
    {
        scanf("%d",&a);
        if(a%2 == 1)
        {
            b=a;
            d=d+a;
    }
        if(b<c)
         {
            c = b;
         }
        i++;
    }
    if(d==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d\n",d);
        printf("%d",c);
    }
    return 0;
 }