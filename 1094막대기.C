#include <stdio.h>
int main() 
{
    int a,b=0;
    scanf("%d",&a);
    while(a>0)
    {
        b = b+a%2;
        a = a/2;
    }
    printf("%d",b);
    return 0;
}