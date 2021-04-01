#include<stdio.h>
#include<string.h>
int main ()
{
    int count=1,c;
    char arr[1000001]={};
    scanf("%[^\n]s",arr);
    c=strlen(arr);
    for(int i = 0 ;i<c;i++)//첫번째에 띄워쓰기 오는 조건 생각합시다.
    {
        if(arr[i]==' '&&arr[i-1]!=' ')
        {
            count++;
        }
    }
    if(arr[c-1]==' ')
    {
        count = count -1;
    }
    if(arr[0]==' ')
    {
        count = count -1;
    }
    printf("%d\n",count);
    
    return 0;
}