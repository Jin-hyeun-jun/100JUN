#include <stdio.h>
int main() 
{
    int a,b,c=0,i=0;
    int arr[9]={};
    scanf("%d",&a);
    if(a==0)
    {
        printf("1");
        return 0;
    }
    while(a>0)
    {
       b=a%10;
       if(b==9)
       {
           b=6;
       }
       arr[b]++;
       a=a/10;
    }
    if(arr[6]%2==0)
    {
        arr[6]=arr[6]/2;
    }
    else if(arr[6]>2&&arr[6]%2==1)
    {
        arr[6]=arr[6]/2+1;
    }
    while(9>i)
    {
        if(arr[i]>c)
        {
            c = arr[i];
        }
          i++;
    }
    printf("%d",c);
   return 0;
}