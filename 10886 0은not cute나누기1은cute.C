#include <stdio.h>
int main() 
{
    int a,b,e,d;
    scanf("%d",&a);
    e = 0;
    d = 0;
    int i = 0;
    while(i<a)
    {
        
        scanf("%d",&b);
        if(b==1)
        {
            d = d+1;
        }
        if(b==0)
        {
             e = e+1;
        }
        i++;
    }
        
        if(d>e)
        {
            printf("Junhee is cute!");
        }
        if(d<e)
        {
            printf("Junhee is not cute!");
        }
    return 0;
 }