#include <stdio.h>
int main() 
{
    int a,i=1,b,c,h=0;
    scanf("%d",&a);
while(i<1000000)
{
    b=0;
        if(i%2==1)
        {
            while(i>=b)
            {
               b++;
               h++;
                  if(a==h)
                  {
                      break;
                  }
            }
        }
        
        if(a==h)
        {
            break;
        }
        b=0;
        if(i%2==0)
        {
            b=i;
            while(b>1)
            {
               b--;
               h++;
                  if(a==h)
                  {
                      break;
                  }
            }
        }
        if(a==h)
        {
            break;
        }
    i++;
}

i=1;
h=0;
while(i<1000000)
{
    if(i==1)
    {
        h++;
    }
        if(i%2==1)
        {
            c=i;
            
            while(c>1)
            {
               c--;
               h++;
                  if(a==h)
                  {
                      break;
                  }
            }
        }
        
        if(a==h)
        {
            break;
        }
        
        if(i%2==0)
        {
            c=0;
            while(i>=c)
            {
               c++;
               h++;
                  if(a==h)
                  {
                      break;
                  }
            }
        }
        if(a==h)
        {
            break;
        }
    i++;
}

printf("%d/%d",c,b);    
    
    return 0;
}