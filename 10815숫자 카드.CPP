#include <iostream>
int arr[20000001] = {};
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, c, d;

    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cin >> c;
        arr[c + 10000000]++;
    }
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        cin >> d;
        if (arr[d + 10000000] > 0)
        {
            cout << "1 ";
        }
        else
        {
            cout << "0 ";
        }
    }

}