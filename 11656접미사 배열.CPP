#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    string arr;
    cin >> arr;
    vector<string>arr1;
    for (int i = 0; i < arr.length(); i++)
    {
        arr1.push_back(arr.substr(i, arr.length()));
    }
    sort(arr1.begin(), arr1.end());
    for (int i = 0; i < arr.length(); i++)
    {
        cout << arr1[i] << "\n";
    }


}