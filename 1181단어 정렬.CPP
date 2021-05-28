#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;

bool com(string a, string b)
{
    if (a.length() != b.length())
    {
        return a.length() < b.length();
    }
    else
    {
        return a < b;
    }

}

int main() {
    int a;
    string arr[20000];
    cin >> a;
    for (int i; i < a; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + a, com);
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            continue;
        }
        else
        {
            cout << arr[i] << '\n';
        }
    }


}