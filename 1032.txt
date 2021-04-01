#include<stdio.h>
#include<string.h>
int main ()
{
    int a,b,c;
    char arr[101][101];
    scanf("%d",&a);
    for(int i =0;i<a;i++)
    {
        scanf("%s",&arr[i]);
    }
    b=strlen(arr[0]);
    for(int i=1;i<a;i++)
    {
       for(int k=0;k<b;k++)
       {
        if(arr[0][k]!=arr[i][k])
        {
            arr[0][k]='?';
        }
       }
    }
   
    printf("%s",arr[0]);
    return 0;
}