#include <iostream>
//#include <vector>
//#include <algorithm>
using namespace std;
int sum (int v)
{
    
    int a=v;
    int b=v;
    while(a!=0)
    {
        int c;
      
         c = a%10;
        
        a=a/10;
        b=b+c;
    }
    return b;
}

int main() {
    int a;
    
    //cout << 9/10<<"\n";
    cin >> a;
    //vector<int>v;
    
    //cout << sum(198);
    
    for(int i=1;i<=a;i++)
    {
        int o;
       
       o = sum(i);
        
        
        
        
        
        if(o==a)
        {
           cout<<i;
           return 0;
        }
        
    }
   
    cout << "0";
    
}
