#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a;
    int arr[3000] = {};
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        arr[b + 1000]++;
    }
    for (int i = 0; i < 2001; i++)
    {
        if (arr[i] > 0)
        {
            cout << i - 1000 << ' ';
        }
    }


}