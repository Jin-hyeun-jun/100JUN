#include<stdio.h>
#include<math.h>
char star[2187][2187]={};
void fullstar()
{
    for(int i=0;i<2187;i++)
    {
        for(int k=0;k<2187;k++)
        {
            star[k][i]='*';
        }
    }
}
void printfstar(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<n;k++)
        {
            printf("%c",star[i][k]);
        }
        if(i!=n-1)
        {
            printf("\n");
        }
    }
}
void fullblank()
{
    for(int i=1;i<2187;i=i+3)//한칸
    {
        for(int k=1;k<2187;k=k+3)
        {
            star[i][k]=' ';
        }
    }
    int o=1;
    while(o<=6)
    {
        int a=pow(3,o),b=pow(3,o),c=2*a-1,d=2*a-1,e=2*a,f=a+c+1,g=pow(3,o);
        while(a<2187)
        {
            for(a;a<=c;a++)
            {
                b=pow(3,o);
                while(b<2187)
                {
                    for(b;b<=d;b++)
                    {
                        star[a][b] = ' ';
                    }
                    b=b+e;
                    d=d+f;
                }
                d=g*2-1;
            }
            a=a+e;
            c=c+f;
        }
        o++;
    }
}
int main()
{
    int a,b;
    scanf("%d",&a);
    fullstar();
    fullblank();
    printfstar(a);
    return 0;
}
