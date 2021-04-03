#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d",&a,&b);
    scanf("%d",&c);
    if(b+c<60)
    {
    printf("%d %d",a,b+c);
    return 0;
    }
    if(b+c>=60)
    {
        e = a+(b+c)/60;
        a=e;
        d= (b+c)%60;
        if(a==24 && d==0)
        {
            printf("0 0");
            return 0;
        }
        if(e>=24)
        {
            a = e-24; 
        }
        printf("%d %d",a,d);
    }
    return 0;
}