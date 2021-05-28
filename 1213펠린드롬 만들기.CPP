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
    string arr2 = "";
    string arr3 = "";
    string arr4 = "";
    vector<char>arr1;
    cin >> arr;
    int alpha[26] = { 0 };
    int b = 0;
    for (int i = 0; i < arr.length(); i++)
    {
        int a = arr[i] - 'A';
        alpha[a]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] % 2 == 1 && alpha[i] > 0)
        {
            b++;
        }
    }
    //cout << b<<"\n";
    if (b > 1)
    {
        cout << "I'm Sorry Hansoo";
        return 0;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] > 0)
        {
            int h = 0;
            for (int k = 0; k < alpha[i] / 2; k++)
            {
                arr2 = arr2 + char(i + 'A');
                h++;
            }
            alpha[i] = alpha[i] - 2 * h;
        }
    }
    for (int i = 25; i >= 0; i--)
    {
        if (alpha[i] > 0 && alpha[i] % 2 == 1)
        {

            for (int k = 0; k < alpha[i]; k++)
            {
                arr3 = arr3 + char(i + 'A');
            }

        }
    }


    cout << arr2 << arr3;
    reverse(arr2.begin(), arr2.end());
    cout << arr2;

}