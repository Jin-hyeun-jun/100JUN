#include <iostream>
#include <string>
#include<math.h>
using namespace std;

int main()
{
    string arr;
    int a, c, d = 0;
    long long b = 0;
    cin >> arr >> a;
    c = arr.length();
    for (int i = c - 1; i >= 0; i--)
    {
        if (arr[i] >= 48 && arr[i] <= 57)
        {
            arr[i] = arr[i] - 48;
        }
        if (arr[i] >= 65 && arr[i] <= 90)
        {
            arr[i] = arr[i] - 55;
        }
        b = arr[i] * pow(a, d) + b;
        d++;
    }

    cout << b;
}