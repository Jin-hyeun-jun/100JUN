#include<stdio.h>
int main()
{
    int a,b,c,d,e,i,j;
    e=0;
    j=0;
    d=0;
    scanf("%d %d" ,&a ,&b);
    if(a==1&&b==1)
    {
        printf("1");
        return 0;
    }
    for(i=1;i>0;i++)
    {
        for(c=0;c<i;c++)
        {
            d = d+i;
            e++;
            if(e==b)
            {
                break;
            }
        }
            if(e==b)
            {
                break;
            }
        }
    if(a==1)
{
    printf("%d",d);
    return 0;
}

    e=0;
    for(i=1;i>0;i++)
    {
        for(c=0;c<i;c++)
        {
            j = j+i;
            e++;
            if(e==a-1)
            {
                break;
            }
        }
            if(e==a-1)
            {
                break;
            }
        }
    
    printf("%d",d-j);
    return 0;
}