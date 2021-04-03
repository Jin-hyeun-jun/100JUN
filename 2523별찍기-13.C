#include <stdio.h>
void(prints)(int n)
{
    for(int i = 1 ; i<=n ; i++)
    {
        printf("*");
    }
   
    
    printf("\n");
}

int main() {
  
  int a,i;
  scanf("%d",&a);
     for(i = 1 ; i<=a ; i++)
  {
      prints(i);
      }
    
    for(i = a-1 ; i>0 ; i--)
  {
      prints(i);
      }
  
  return 0;
}