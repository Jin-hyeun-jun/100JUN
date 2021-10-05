#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin >> a>>b;
    c=a;
    if(b==0)
    {
        cout << 1;
        return 0;
    }
    for(int i=0;i<b;i++)
    {
        if(i==0)
        {
            continue;
        }
      c=c*(a-i);
    }
    int d=1;
    for(int i=1;i<=b;i++)
    {
        d=d*i;
    }
    cout <<c/d;
}
