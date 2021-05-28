#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;




int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    string arr;
    int a = 1;
    while (a > 0)
    {
        cin >> arr;
        if (arr[0] == '0')
        {
            break;
        }
        if (arr.length() == 1)
        {
            cout << "yes" << "\n";
        }
        // cout <<arr.length()<<"\n";
        for (int i = 0; i < arr.length() / 2; i++)
        {
            if (arr[i] != arr[arr.length() - i - 1])
            {
                cout << "no" << "\n";
                break;
            }
            if (i == arr.length() / 2 - 1)
            {
                cout << "yes" << "\n";
            }
        }
    }



}