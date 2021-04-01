#include <stdio.h>
int Rev(int v)
{
 int a,b,c,d,f;
 if(v>=1000)
 {
     a=v/1000;
     b=(v-a*1000)/100;
     c=(v-a*1000-b*100)/10;
     d=(v-a*1000-b*100)%10;
     f = 1000*d+100*c+10*b+a;
     return f;
 }
 if(v>99)
 {
 b=v/100;
 c=(v-b*100)/10;
 d=(v-b*100)%10;
 f=d*100+c*10+b;
 return f;
 }
 if(v<100&&v>10)
 {
     b=v/10;
     c=v%(b*10);
     f=c*10+b;
     return f;
 }
 if(v==10)
 {
     f=1;
     return f;
 }
 if(v<10)
 {
     f=v;
     return f;
 }
 return f;
}

int main() 
{
   int a,b,c;
   scanf("%d %d",&a,&b);
   c = Rev(a)+Rev(b);
   printf("%d",Rev(c));
   return 0;
}