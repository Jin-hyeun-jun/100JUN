#include <iostream>

using namespace std;

int uclid(int n, int m)
{
    if (n % m == 0)
    {
        return m;
    }
    else
    {
        return uclid(m, n % m);
    }
}


int main()
{
    int a, b, c, d;
    cin >> d;
    for (int i = 0; i < d; i++)
    {
        cin >> a >> b;
        c = uclid(a, b);

        cout << a / c * b << "\n";
    }
}