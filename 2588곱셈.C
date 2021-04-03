#include<stdio.h>
int main()
{
    int a, b, c;


    scanf("%d", &a);
    scanf("%d", &b);
    int d = a * b;
    c = (b % 100) / 10;
    printf("%d\n", a * (b % 10));
    printf("%d\n", a * c);
    printf("%d\n", a * (b / 100));
    printf("%d", d);








    return 0;
}