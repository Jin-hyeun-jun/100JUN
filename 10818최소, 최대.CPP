#include <iostream>

using namespace std;

int main() {
    int a, b = -1000001, c = 1000001;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
        if (arr[i] > b)
        {
            b = arr[i];
        }
        if (arr[i] < c)
        {
            c = arr[i];
        }
    }
    cout << c << " " << b;
}