#include <iostream>
#include <string>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
    long long a = 0, b = 0, c = 0, d = 0;
    string arr;
    string arr1 = "";
    cin >> arr;
    vector<long long>eight;

    for (long long i = 0; i < arr.length(); i++)
    {
        // cout <<arr[i];
    }
    //cout <<"\n";
    for (long long i = arr.length() - 1; i >= 0; i--)
    {

        arr1 = arr1 + arr[i];
        d++;
        if (d == 3 || i == 0)
        {
            for (int v = 0; v < arr1.length(); v++)
            {
                // cout <<arr1[v];
            }
            //cout << "\n";
            c = 0;
            for (int k = 0; k < arr1.length(); k++)
            {
                if (arr1[k] == '1')
                {
                    c = pow(2, k) + c;
                    //cout << k << "k" <<"\n";
                }
            }
            // cout << c <<"\n";
            eight.push_back(c);
            d = 0;
            arr1 = "";
        }

    }

    for (long long i = eight.size() - 1; i >= 0; i--)
    {
        cout << eight[i];

    }


}