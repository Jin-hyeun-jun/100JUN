#include <stdio.h>

long wind(long a,long b)
{
    long c,d;
     if(a<b&&a<=-b)//위 
    {
        c=b-a-1;
        d=(a*2)*(a*2)-c;
        
    }
    if(a>=b&&a>=-b)//아래 1포함 
    {
        if(a==0&&b==0)
        {
            d = 1;
        }
        else
        {
         c=a-b;
         d=(2*a+1)*(2*a+1)-c;
        }
    }
    if(a>=b&&a<-b)//왼쪽
    {
        c=a-b;
        d=((2*b)*(2*b)+1)+c;
    }
    if(a<b&&a>-b)//오른쪽
    {
        if(a==0&&b==1)
        {
            d = 2;
        }
        else
        {
            c=b-a-1;
            d=((2*b-1)*(2*b-1)+1)+c; 
        }
        
    }

    return d;
}
long compare(long a)
{
    long c=1,l=1;
    while(c<=a)
    {
        l++;
        c=c*10;
    }
    l--;
    return l;
}
void wind2(long a,long b,long v)
{
    long c,d,e,o;
     if(a<b&&a<=-b)//위 
    {
        c=b-a-1;
        d=(a*2)*(a*2)-c;
        
    }
    if(a>=b&&a>=-b)//아래 1포함 
    {
        if(a==0&&b==0)
        {
            d = 1;
        }
        else
        {
         c=a-b;
         d=(2*a+1)*(2*a+1)-c;
        }
    }
    if(a>=b&&a<-b)//왼쪽
    {
        c=a-b;
        d=((2*b)*(2*b)+1)+c;
    }
    if(a<b&&a>-b)//오른쪽
    {
        if(a==0&&b==1)
        {
            d = 2;
        }
        else
        {
            c=b-a-1;
            d=((2*b-1)*(2*b-1)+1)+c; 
        }
        
    }
    
    printf("%*ld",v,d);
    
}
int main()
{
    long a,b,x,y,i,p=0;
    long r1,c1,r2,c2;
    scanf("%ld %ld %ld %ld",&r1,&c1,&r2,&c2);
    for(long i =r1;i<=r2;i++)
    {
        for(long k =c1;k<=c2;k++)
        {
            wind(i,k);
            compare(wind(i,k));
           if(compare(wind(i,k))>p)
           {
               p=compare(wind(i,k));
           }
        }
    }
    
    
    for(long i =r1;i<=r2;i++)
    {
        for(long k =c1;k<=c2;k++)
        {
           wind2(i,k,p);
           if(k!=c2)
           {
            printf(" ");
           }
        }
        if(i!=r2)
        {
            printf("\n");
        }
    }
    return 0;
    
}









