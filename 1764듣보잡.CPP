#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<string>arr;
    vector<string>arr1;
    string arr3;
    int a, b;
    cin >> a >> b;
    //arr.resize(a); 나중에 시간 빠르게 할꺼면 이렇게 하구 배열 처럼쓰자.
    for (int i = 0; i < a; i++)
    {
        cin >> arr3;
        arr.push_back(arr3);
    }
    sort(arr.begin(), arr.end());//? 이진 탐색할려면 이거 해줘야했다 왜 오류 뜨나 했다.
    for (int i = 0; i < b; i++)
    {
        string arr2;
        cin >> arr2;
        if (binary_search(arr.begin(), arr.end(), arr2))
        {
            arr1.push_back(arr2);
        }
    }
    sort(arr1.begin(), arr1.end());
    cout << (int)arr1.size() << "\n";
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << "\n";

    }
}
//cin >>
//cout <<