#include <iostream>

using namespace std;

int main()
{
    int a, b = 0;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
        if (arr[i] == 2)
        {
            b++;
        }
        for (int k = 2; k < arr[i]; k++)
        {
            if (arr[i] % k == 0)
            {
                break;
            }
            if (k == arr[i] - 1)
            {
                b++;
            }
        }
    }
    cout << b;
}