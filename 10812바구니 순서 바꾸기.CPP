#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);



    int a, b, c, d, e;
    cin >> a >> b;
    int arr[101];
    for (int i = 1; i <= a; i++)
    {
        arr[i] = i;
    }
    for (int i = 0; i < b; i++)
    {
        cin >> c >> d >> e;
        rotate(&arr[c], &arr[e], &arr[d + 1]);

    }
    for (int i = 1; i <= a; i++)
    {
        cout << arr[i] << " ";
    }



}
//cout <<
//cin >>