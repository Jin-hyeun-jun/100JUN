#include <stdio.h>
int main() 
{
    int a,c;
    for(int i = 0; i<3;i++)
    {
        c = 0;
        for(int b = 0; b<4;b++)
        {
            scanf("%d",&a);
            if(a==1)
                {
                c = c+1;
                }
            }
    if(c==4)
     {
      printf("E\n");  
     }
    if(c==1)
     {
      printf("C\n");  
     }
    if(c==2)
     {
      printf("B\n");  
     }
    if(c==3)
     {
      printf("A\n");  
     }
    if(c==0)
     {
      printf("D\n");  
     }
    }
    return 0;
}