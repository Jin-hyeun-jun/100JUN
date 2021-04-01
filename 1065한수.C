#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    if(a<100)
    {
        b=a;
        printf("%d",b);
        return 0;
    }
    b=0;
    for(int i=100;i<=a;i++)
    {
    c = i/100;
    d = (i-c*100)/10;
    e = i-c*100-d*10;
    if((c-d)==(d-e))
    {
        b = b+1;
    }
    }
    printf("%d",99+b);
    return 0;
}