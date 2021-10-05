#include <iostream>
#include<queue>
using namespace std;

int main() {
    int a;
    cin >> a;
    queue<int>q;
    for(int i=1;i<=a;i++)
    {
        q.push(i);
       
    }
    
    while(q.size()>1)
    {
        q.pop();
        q.push(q.front());
         q.pop();
    }
   cout <<  q.front() ;  
}
