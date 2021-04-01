#include <stdio.h>
int main() 
{
    int a,i=0,b=9,c;
    int arr[10]={};
    scanf("%d",&a);
    while(a>0)
    {
        arr[i]=a%10;
        i++;
        a=a/10;
    }
    while(b>=0)
    {
        c=i-1;
        while(c>=0)
        {
            if(b==arr[c])
            {
                printf("%d",arr[c]);
            }
            c--;
        }
        b--;
    }
    return 0;
}