#include <stdio.h>
char arr[3100][6200]={0};
void full_star(int n, int x, int y)
{
    if(n == 3)
    {
        arr[y][x]= '*';
        arr[y+1][x-1] = '*';
        arr[y+1][x+1] = '*';
        arr[y+2][x-2] = '*';
        arr[y+2][x-1] = '*';
        arr[y+2][x] = '*';
        arr[y+2][x+1] = '*';
        arr[y+2][x+2] = '*';
        return ;
    }
    full_star(n/2, x, y);
    full_star(n/2, x - (n/2),y + n/2);
    full_star(n/2, x + n/2, y + n/2);
}
void full_blank(int n)
{
    for(int i = 0;i < n;i++)
    {
        for(int k = 0;k < 2*n;k++)
        {
            /*
            if(k==2*n-1&&i==n-1)
            {
                break;
            }
            */
            arr[i][k] =' ';
            
        }
    }
}
void printfstar(int n)
{
   for(int i = 0;i < n;i++)
    {
        for(int k = 0;k < 2*n;k++)
        {
            printf("%c", arr[i][k]);
        }
        if(i!=n-1)
        {
        printf("\n");
        }
    } 
}
int main()
{
    int a;
    scanf("%d", &a);
    full_blank(a);
    full_star(a,a-1,0);
    printfstar(a);
    return 0;
}