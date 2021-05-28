#include <iostream>
#include<vector>
#include<algorithm>
//ifπÆ ∞¯∫Œ¡ª «œ¿Â
//vector[]
using namespace std;

int main()
{
    vector<int>arr[100001];
    int a, b, c, d = 0;
    long long e = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b >> c;
        arr[c].push_back(b);
        if (c > d)
        {
            d = c;
        }
    }
    for (int i = 1; i <= d; i++)
    {
        if (arr[i].size() < 2)
        {
            continue;
        }
        sort(arr[i].begin(), arr[i].end());
        for (int v = 0; v < arr[i].size(); v++)
        {

            if (v == arr[i].size() - 1)
            {
                e = (arr[i][v] - arr[i][v - 1]) + e;
            }
            if (v == 0)//elseøÕ ∞¡ if∂˚ π∫¬˜¿Ã?
            {
                e = (arr[i][v + 1] - arr[i][v]) + e;
            }
            if (v != 0 && v != arr[i].size() - 1)
            {
                e = min(arr[i][v + 1] - arr[i][v], arr[i][v] - arr[i][v - 1]) + e;
            }
        }

    }
    cout << e;
}