#include <stdio.h>
int main() 
{
    int a,b,c,d,i;
    i=1;
    c=1;
    scanf("%d",&a);
    if(a==1)
    {
        printf("1");
        return 0;
    }
    if(a>1&&a<8)
    {
        printf("2");
        return 0;
    }
    while(a>c)
    {
        c = c+6*i;
        
        i++;
    }
    printf("%d",i);
    return 0;
}