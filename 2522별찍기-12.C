#include <stdio.h>
void(prints)(int v,int n)
{
    for(int i = v ; i>0; i--)
    {
        printf(" ");
    }
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
      prints(a-i,i);
      }
    
    for(i = a-1 ; i>0 ; i--)
  {
      prints(a-i,i);
      }
  
  return 0;
}