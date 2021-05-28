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
    cin >> c;
    int arr[c];
    for (int i = 0; i < c; i++)
    {

        cin >> arr[i];
    }
    int e = 0;
    for (int i = 0; i < c; i++)
    {
        e = arr[i] * pow(a, (c - i - 1)) + e;
    }
    //cout << e<<"\n";
    while (e > 0)
    {


        int l = e % b;
        arr1.push_back(l);
        e = e / b;


    }
    reverse(arr1.begin(), arr1.end());
    for (auto x : arr1)
    {
        cout << x << " ";
    }

}