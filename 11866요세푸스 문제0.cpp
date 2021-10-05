#include <iostream>
#include <queue>


using namespace std;

int main() {
    int a,b;
    cin >>a>>b;
    
    queue<int>q;
    
    for(int i=1;i<=a;i++)
    {
        q.push(i);
    }
    cout << "<";
    for(int i=0;i<a;i++)
    {
        for(int k=0;k<b-1;k++)
        {
            q.push(q.front());
            q.pop();
        }
        if(i==a-1)
        {
            cout << q.front();
            break;
        }
        cout << q.front()<<", ";
        q.pop();
    }
  cout << ">";
}
