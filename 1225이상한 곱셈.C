#include <stdio.h>
#include <string.h>
int main() 
{
    long a,b,c,d=0,e,f=0;
    char arr[10001];
    char arr1[10001];
   
    scanf("%s %s",arr,arr1);
    a=strlen(arr);
    b=strlen(arr1);
  for(int i=0;i<a;i++)
  {
      c=arr[i]-48;
      d=c+d;
  }
   for(int i=0;i<b;i++)
  {
      e=arr1[i]-48;
      f=e+f;
  }
   
   printf("%lld",f*d);
   
   return 0;
}