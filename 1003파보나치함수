#include <iostream>


using namespace std;

void pibor1(int n)
{
    int pibore[41]={1,0,1};
    for(int i=2;i<=n+1;i++)
    {
        pibore[i]=pibore[i-1]+pibore[i-2];
    }
    
     cout << pibore[n]<<" "<<pibore[n+1];
}

int main() {
    int a,b;
    
    cin >> a;
    
    for(int i=0;i<a;i++)
    {
        cin >> b;
        if(b==0)
        {
            cout << "1"<<" "<<"0";
        }
        if(b==1)
        {
            cout << "0"<<" "<<"1";
        }
        if(b>=2)
        {
            pibor1(b);
          
        }
        if(i!=a-1)
        {
           cout << "\n";
        }
    }
    
}
