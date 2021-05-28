#include <iostream>
#include <string>
#include<math.h>
#include<vector>
using namespace std;

int main()
{


    vector<int>arr;
    long long a, b, c, d;
    cin >> b >> a;

    while (b > 0)
    {
        arr.push_back(b % a);
        b = b / a;


    }
    /*
    for(auto x: arr)
    {
        cout << x <<"\n";
    }
    */
    // cout << arr.size()<<"\n";
    c = arr.size();
    for (int i = c - 1; i >= 0; i--)
    {
        if (arr[i] >= 10)
        {
            char e = 'A' + arr[i] - 10;
            cout << e;
        }
        else
        {
            arr[i];
            cout << arr[i];
        }

    }


}