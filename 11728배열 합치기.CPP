#include <iostream>
#include<vector>
#include<math.h>
#include<algorithm>
//if문 공부좀 하장
//vector[]

using namespace std;


int main()
{
    vector<int>arr1;
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a, b, c, d;
    cin >> a >> b;
    int arr[a + b];

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = a; i < b + a; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + a + b);
    for (int i = 0; i < a + b; i++)
    {
        cout << arr[i] << " ";
    }

}