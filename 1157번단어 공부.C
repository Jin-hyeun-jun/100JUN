#include <stdio.h>
#include <string.h>
int main() 
{
    int a,c=26,d=-1,e=0,k;
    char arr[1000001]={};
    int arr1[100];
 scanf("%s",&arr);
    a=strlen(arr);
    for(int i =0;i<a;i++)
    {
        if(arr[i]>='a'&&arr[i]<='z')
        {
            arr[i]=arr[i]-32;
        }
        arr1[arr[i]]++;
    }
        for(int i =65;i<91;i++)
        {
            if(arr1[i]>d)
            {
                d=arr1[i];
                k=i;
            }
        }
        for(int i =65;i<91;i++)
        {
            if(d==arr1[i])
            {
               e++;
               if(e>=2)
               {
                   break;
               }
            }
        }
  
   
    if(e==1)
    {
         printf("%c",k);
    }
    if(e>1)
    {
        printf("?");
    }
    //26개 배열 만들어서 알지/3
    return 0;
    //+-해줘서 아스키코드변환
}