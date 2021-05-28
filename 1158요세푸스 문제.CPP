#include <iostream>
#include<queue>
#include<string>


using namespace std;

int main()
{

    int a, b;

    cin >> a >> b;
    queue<int>yose;
    for (int i = 1; i <= a; i++)
    {
        yose.push(i);
    }
    cout << "<";
    for (int i = 0; i < a; i++)
    {
        if (yose.size() == 1)
        {
            cout << yose.back() << ">";
            break;
        }
        for (int i = 1; i < b; i++)
        {
            yose.push(yose.front());
            yose.pop();
        }
        cout << yose.front() << ", ";
        yose.pop();

    }




}
//cout <<
//cin >>