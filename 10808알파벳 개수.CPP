#include <iostream>
#include<string>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);



    int arr1[26] = {};
    string arr;
    cin >> arr;
    for (int i = 0; i < arr.length(); i++)
    {
        arr1[arr[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        cout << arr1[i] << " ";
    }



}
//cout <<
//cin >>