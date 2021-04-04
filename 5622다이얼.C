#include<stdio.h>
#include<string.h>
int main()
{
    int a, b = 0;
    char arr[27];
    scanf("%s", &arr);
    a = strlen(arr);
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == 'A' || arr[i] == 'B' || arr[i] == 'C')
        {
            b = b + 3;
        }
        if (arr[i] == 'D' || arr[i] == 'E' || arr[i] == 'F')
        {
            b = b + 4;
        }
        if (arr[i] == 'G' || arr[i] == 'H' || arr[i] == 'I')
        {
            b = b + 5;
        }
        if (arr[i] == 'J' || arr[i] == 'K' || arr[i] == 'L')
        {
            b = b + 6;
        }
        if (arr[i] == 'M' || arr[i] == 'N' || arr[i] == 'O')
        {
            b = b + 7;
        }
        if (arr[i] == 'P' || arr[i] == 'Q' || arr[i] == 'R' || arr[i] == 'S')
        {
            b = b + 8;
        }
        if (arr[i] == 'T' || arr[i] == 'U' || arr[i] == 'V')
        {
            b = b + 9;
        }
        if (arr[i] == 'W' || arr[i] == 'X' || arr[i] == 'Y' || arr[i] == 'Z')
        {
            b = b + 10;
        }
    }

    printf("%d", b);

    return 0;
}