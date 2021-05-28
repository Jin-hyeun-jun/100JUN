
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
    int a, b, c;
    cin >> a >> b;
    c = uclid(a, b);

    cout << c << "\n" << a / c * b;
}