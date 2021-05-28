#include <iostream>
#include <string>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
    long long a = 0, b = 0, c = 0, d = 0;
    string arr[7] = { "1","10","11","100","101","110","111" };
    string arr1[8] = { "000","001","010","011","100","101","110","111" };
    string arr2;
    cin >> arr2;
    vector<long long>eight;

    //for(long long i=0;i<arr.length();i++)
    //{
       // cout <<arr[i];
    //}
    //cout <<"\n";
    //cout << arr[1]<<"\n";
    //cout << arr1[0];
    if (arr2.length() == 1 && arr2[0] == '0')
    {
        cout << 0;
        return 0;
    }

    for (long long i = 0; i < arr2.length(); i++)
    {
        if (i == 0)
        {
            if (arr2[i] == '1')
            {
                cout << arr[0];
            }
            if (arr2[i] == '2')
            {
                cout << arr[1];
            }
            if (arr2[i] == '3')
            {
                cout << arr[2];
            }
            if (arr2[i] == '4')
            {
                cout << arr[3];
            }
            if (arr2[i] == '5')
            {
                cout << arr[4];
            }
            if (arr2[i] == '6')
            {
                cout << arr[5];
            }
            if (arr2[i] == '7')
            {
                cout << arr[6];
            }
        }
        if (i != 0)
        {
            if (arr2[i] == '0')
            {
                cout << arr1[0];
            }
            if (arr2[i] == '1')
            {
                cout << arr1[1];
            }
            if (arr2[i] == '2')
            {
                cout << arr1[2];
            }
            if (arr2[i] == '3')
            {
                cout << arr1[3];
            }
            if (arr2[i] == '4')
            {
                cout << arr1[4];
            }
            if (arr2[i] == '5')
            {
                cout << arr1[5];
            }
            if (arr2[i] == '6')
            {
                cout << arr1[6];
            }
            if (arr2[i] == '7')
            {
                cout << arr1[7];
            }
        }




    }

    /*
   for(long long i=0;i<eight.size();i++)
   {
    cout << eight[i];
   }

   */
}