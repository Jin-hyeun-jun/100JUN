#include <iostream>
#include <string>
#include <stack>
#include <cstring>
#include <algorithm>
using namespace std;

int main() { 
    int a,b;
    cin >> a;
    stack<int>ch;
    for(int i=0;i<a;i++)
    {
        cin >> b;
        if(b!=0)
        {
            ch.push(b);
        }
        else
        {
            ch.pop();
        }
    }
    int c=0;
    int r = ch.size();
    for(int i=0;i<r;i++)
    {
        int d=ch.top();
         
        c=c+d;
        ch.pop();
    }
    cout << c;
}
