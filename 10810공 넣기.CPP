#include <iostream>
#include<string>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);



    int a, b, c, d, e;
    cin >> a >> b;
    int arr[a] = {};
    for (int i = 0; i < b; i++)
    {
        cin >> c >> d >> e;
        for (int k = c - 1; k < d; k++)
        {
            arr[k] = e;
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }



}
//cout <<
//cin >>