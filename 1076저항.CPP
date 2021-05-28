#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    long long a;
    string arr[10] = { "black","brown","red","orange","yellow","green","blue","violet","grey","white" };
    string arr1;
    long long arr2[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr1;
        // cout << i;
        for (int v = 0; v < 10; v++)
        {
            if (arr1 == arr[v])
            {
                arr2[i] = v;
            }
        }

    }
    a = (10 * arr2[0] + arr2[1]) * pow(10.0, arr2[2]);
    cout << a;

}