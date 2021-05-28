#include <iostream>
#include<stack>
#include<string>


using namespace std;

int main()
{
    stack<char> vps;
    int a;
    int v;
    cin >> a;
    string arr;

    for (int i = 0; i < a; i++)
    {

        cin >> arr;
        for (v = 0; v < arr.length(); v++)
        {
            if (arr[v] == '(')
            {
                vps.push(arr[v]);
            }
            if (arr[v] == ')')
            {
                if (vps.empty())
                {
                    cout << "NO" << "\n";
                    break;
                }
                if (!vps.empty())
                {
                    vps.pop();
                }
            }

        }

        if (v == arr.length())
        {
            if (vps.empty())
            {
                cout << "YES" << "\n";
            }
            if (!vps.empty())
            {
                cout << "NO" << "\n";
            }
            while (!vps.empty())
            {
                vps.pop();
            }
        }

    }


}
//cout <<
//cin >>