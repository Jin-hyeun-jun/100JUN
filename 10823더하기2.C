#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a;
    int sum = 0;
    int num;
    char s[10000];
    char str[10000];

    while (scanf("%s", s) != EOF)
    {
        strcat(str, s);
    }
    /*
    scanf("%s",&s);
    a=strlen(s);
    for(int i = 0;i<a;i++)
    {
        strcat(str,s[i]);
    }
    */
    char* result = strtok(str, ",");
    while (result != NULL)
    {
        num = atoi(result);
        sum += num;
        result = strtok(NULL, ",");
    }
    printf("%d", sum);
}
