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
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        int arr[b] = {};
        for (int p = 0; p < b; p++)
        {
            cin >> arr[p];
        }
        long long d = 0;//100C2*10000000>21¾ï
        for (int k = 0; k < b; k++)
        {
            for (int v = k + 1; v < b; v++)
            {
                c = uclid(arr[k], arr[v]);
                d = c + d;
            }
        }


        cout << d << "\n";

    }
}