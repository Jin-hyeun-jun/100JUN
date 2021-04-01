#include <stdio.h>
int main() 
{
    int a,b,c,d,e,i=1;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int arr[4]={a,b,c-a,d-b};
    e = a;
    while(i<4)
    {
        if(e>arr[i])
        {
            e = arr[i];
        }
        i++;
    }
    printf("%d",e);
    
    return 0;
}