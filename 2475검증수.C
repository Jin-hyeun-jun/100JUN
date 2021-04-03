#include<stdio.h>
int main ()
{
    int a,b,c,d,e,f;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    f =(a*a+b*b+c*c+d*d+e*e)%10;
    printf("%d",f);
    return 0;
        
}