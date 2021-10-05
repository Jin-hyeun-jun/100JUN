#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    long long a,b;
    
    //cout << 9/10<<"\n";
    cin >> a>>b;
    vector<int>v;
    
    //cout << sum(198);
    int c;
    for(int i=0;i<a;i++)
    {
        cin >>c;
        v.push_back(c);
        
        
        
        
       
        
    }
  long long min = *min_element(v.begin(), v.end());
  long long max = *max_element(v.begin(), v.end());
  
  if(min == max)
  {
      min =0;
  }
 long long x =9;
// cout << x/2 <<"\n";

  long long sum;
  long long suc=0;
  while(min<=max)
  {
     
       long long mid = (min+max)/2; 
       /*
      if(mid==max)
      {
          mid = mid/2;
      }
      */
      
      sum=0;
      for(int i=0;i<a;i++)
     {
        if(v[i]>mid)
        {
            sum = sum+(v[i]-mid);
        }
     }
     
     if(sum>=b)
    {
        min = mid+1;
        if(suc<mid)
        {
            suc = mid;
        }
    }
    else
    {
        max = mid-1;
    }
     
  }
    cout << suc;
    
    
}
