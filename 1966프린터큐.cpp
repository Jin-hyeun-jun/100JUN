#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    int a,b,c,d,e;
    cin >> a;
    
   
    for(int i=0;i<a;i++)
    {
        queue<pair<int, int>>q;
    priority_queue<int>pq;
        e=0;
    cin >> b >>c;
    for(int v=0;v<b;v++)
    {
        cin >>d;
        
         q.push(pair<int,int>(v,d)); 
         pq.push(d);
    }
   
    while(!q.empty())
     {
        int index = q.front().first;
        int value = q.front().second;
        q.pop();
         
        if(pq.top()==value)
        {
           
             pq.pop();
              e++;
             if(index==c)
             {
               cout << e<<"\n";
                break;
             }
          
        }
        else if(pq.top()!=value)
        {
        q.push(pair<int,int>(index,value)); 
        }
            
    
     }
     
    }
    
    
    
}
