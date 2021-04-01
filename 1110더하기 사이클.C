#include<stdio.h>
int main()
{
    int a,b,c,d,e,g,f;
    int i = 0;
    scanf("%d",&a);
    f = a;
    do
    {
    b = a/10;
    c = a%10;
    e = b+c;
    g = e%10;
    d = c*10+g;
    a = d;
    i++;}while(a !=f);
    printf("%d",i);
    return 0;
}