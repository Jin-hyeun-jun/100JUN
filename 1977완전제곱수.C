#include <stdio.h>
int main() 
{
   int a,b,e,i,d,h=0,k,o=0;
   scanf("%d %d",&a,&b);
   k=a;
   while(a<=b)
   {   
       
       i=1;
       e=1;
       while(i<=a)
       {
        i=e*e;
        if(a==i)
        {
            h=h+i;
        }
        e++;
        }
        a++;
     }
     if(h==0)
     {
         printf("-1");
         return 0;
     }
   printf("%d\n",h);
  
    while(k<=b)
   {   
       
       i=1;
       e=1;
       while(i<=k)
       {
        i=e*e;
        if(k==i)
        {
            o=o+i;
            printf("%d",o);
            return 0;
        }
        e++;
        }
        k++;
     }
   
  
   
   return 0;
}