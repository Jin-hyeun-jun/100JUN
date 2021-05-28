#include <iostream>

using namespace std;
long long two(long long n)
{
    long long c = 0;
    for (long long i = 2; i <= n; i = 2 * i)
    {
        c = c + n / i;

    }
    return c;
}

long long five(long long n)
{
    long long c = 0;
    for (long long i = 5; i <= n; i = 5 * i)
    {
        c = c + n / i;

    }
    return c;
}




int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    long long a, b, c, d;
    cin >> a >> b;
    if (b == 0)
    {
        cout << "0";
        return 0;
    }

    c = five(a) - five(a - b) - five(b);
    d = two(a) - two(a - b) - two(b);
    if (c >= d)
    {
        cout << d;
    }
    if (d > c)
    {
        cout << c;
    }
}