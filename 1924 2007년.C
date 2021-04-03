#include <stdio.h>
int main() 
{
    int a,b,c=1,d=0,e=0;
    int arr[12]={0,31,28,31,30,31,30,31,31,30,31,30};
    
    scanf("%d %d",&a,&b);
    while(c<a)
    {
        d=d+arr[c];
        c++;
    }
    if((d+b)%7==1)
    {
        printf("MON");
        return 0;
    }
    if((d+b)%7==2)
    {
        printf("TUE");
        return 0;
    }
    if((d+b)%7==3)
    {
        printf("WED");
        return 0;
    }
    if((d+b)%7==4)
    {
        printf("THU");
        return 0;
    }
    if((d+b)%7==5)
    {
        printf("FRI");
        return 0;
    }
    if((d+b)%7==6)
    {
        printf("SAT");
        return 0;
    }
    if((d+b)%7==0)
    {
        printf("SUN");
        return 0;
    }
return 0;
}