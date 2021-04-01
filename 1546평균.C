#include <stdio.h>
int main() {
    int a;
    double b,c,d;
    scanf("%d",&a);
    int i = 0;
    c = 0;
    d = 0;
    while(i<a)
    {
        scanf("%lf",&b);
        d = d+b;
        if(c<b)
        {
            c = b;
        }
        i++;
    }
    printf("%.2f",d/a/c*100.0);
    return 0;
}