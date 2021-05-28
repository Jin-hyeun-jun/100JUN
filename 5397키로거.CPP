#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{

    int a;
    cin >> a;
    for (int v = 0; v < a; v++)
    {
        string arr;//초기화 여부
        cin >> arr;
        stack <char> arr1;
        stack <char> arr2;
        for (int i = 0; i < arr.length(); i++)
        {
            if (arr[i] == '-')
            {
                if (!arr1.empty())
                {
                    arr1.pop();
                }
            }
            else if (arr[i] == '<')
            {
                if (!arr1.empty())
                {
                    arr2.push(arr1.top());
                    arr1.pop();
                }
            }
            else if (arr[i] == '>')
            {
                if (!arr2.empty())
                {
                    arr1.push(arr2.top());
                    arr2.pop();
                }
            }
            else
            {
                arr1.push(arr[i]);
            }

        }
        while (!arr2.empty())
        {

            arr1.push(arr2.top());
            arr2.pop();
        }
        while (!arr1.empty())
        {
            arr2.push(arr1.top());
            arr1.pop();
        }

        while (!arr2.empty())
        {
            cout << arr2.top();
            arr2.pop();
        }


        cout << '\n';
    }

    return 0;
}