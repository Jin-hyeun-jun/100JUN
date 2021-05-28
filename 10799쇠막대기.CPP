#include <iostream>
#include<stack>
#include<string>
using namespace std;
//문제 다시 이해하자 병 ㅢㅅㄴ아 
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    stack<char>len;
    int a = 0;
    string pipe;
    cin >> pipe;

    for (int i = 0; i < pipe.length(); i++)
    {
        if (pipe[i] == ')')
        {
            if (pipe[i - 1] == '(')
            {
                len.pop();
                a = len.size() + a;
            }
            else
            {
                len.pop();
                a++;
            }

        }
        if (pipe[i] == '(')
        {
            len.push(pipe[i]);

        }

    }

    cout << a;


}
//cin >>
//cout <<