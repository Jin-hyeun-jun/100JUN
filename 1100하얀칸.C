#include <stdio.h>
#include <string.h>
int main() 
{
    int a=0;
    char arr[8];
    for(int k=0;k<8;k++)
    {
        scanf("%s",arr);
        if(k%2==0)
        {
        for(int i=0;i<8;i=i+2)
        {
            if(arr[i]=='F')
            {
                a++;
            }
        }
        }
          if(k%2==1)
        {
        for(int i=1;i<8;i=i+2)
        {
            if(arr[i]=='F')
            {
                a++;
            }
        }
        }
    }
   
    
  
    
    printf("%d",a);
   
   return 0;
}
