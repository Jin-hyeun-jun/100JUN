#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    e=0;
    c=0;
    d=0;
    while(c<9)
    {
        scanf("%d",&b);
        e++;
        if(d<b)
        {
            d=b;
            f=e;
        }
        c++;
    }
    printf("%d\n",d);
    printf("%d\n",f);
    return 0;
}