#include <iostream>
#include<stack>
using namespace std;

int main()
{

    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, c, d = 0;
    stack<int> v;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        v.push(b);
    }
    cin >> c;
    for (int i = 0; i < a; i++)
    {

        int e;
        e = v.top();
        if (c == e)
        {
            d++;
        }
        v.pop();
    }



    cout << d;
}
//cout <<
//cin >>