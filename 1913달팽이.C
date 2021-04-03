#include <stdio.h>
int snail[999][999]={};
void readsnail(int a,int b,int c)
{
    for(int k=0;k<=a;k++)
    {
        for(int h=0;h<=a;h++)
        {
            printf("%d ",snail[k][h]);
        }
        printf("\n");
    }
    printf("%d %d",b,c);
}
int main() 
{
    int odd,a=0,c,d,e,x,y=0,o,p,l,q;
    scanf("%d",&odd);
    scanf("%d",&o);
    snail[odd/2][odd/2]=1;
    if(o==snail[odd/2][odd/2])
    {
            p=odd/2;
            l=odd/2;
    }
    q=odd;
    c=odd/2;
    d=c;
    e=odd*odd;
    while(c>0)
    {
        for(x=a;x<odd;x++)
        {
            snail[x][y]=e;
            if(o==snail[x][y])
            {
                p=x;
                l=y;
            }
            e--;
        }
            if(d==c)
            {
                x=x-1;    
            }
            if(d!=c)
            {
                y=y+1;
                x--;
            }
        if(d==c)
        {
            for(y=1;y<=q-1;y++)
            {
                snail[x][y]=e;
                if(o==snail[x][y])
                {
                    p=x;
                    l=y;
                }
            e--;
            }
        }
        if(d!=c)
        {
            for(y;y<=q-1-a;y++)//여기서 문제///
            {
                snail[x][y]=e;
                if(o==snail[x][y])
                {
                    p=x;
                    l=y;
                }
                e--;
                
            }
        }
            y--;
        for(x=x-1;x>=a;x--)//두번째부터 문제
        {
            snail[x][y]=e;
            if(o==snail[x][y])
            {
                p=x;
                l=y;
            }
            e--;
            
        }
            y--;
            x++;
            for(y;y>=a+1;y--)//이놈 수정.
            {   
                snail[x][y]=e;
                if(o==snail[x][y])
                {
                    p=x;
                    l=y;
                }
            e--;
            }
        y++;
        odd=odd-1;
        a++;
        c--;
}
    readsnail(q-1,p+1,l+1);
    return 0;
}

 

 

