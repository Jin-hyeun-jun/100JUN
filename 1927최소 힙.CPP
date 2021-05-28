#include <iostream>
#include<queue>
#include<functional>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    priority_queue<int, vector<int>, greater<int>>hip;
    int a;
    int b;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        if (b != 0)
        {
            hip.push(b);
        }
        if (b == 0)
        {
            if (hip.empty())
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << hip.top() << "\n";
                hip.pop();
            }
        }
    }


}
//cin >>
//cout <<