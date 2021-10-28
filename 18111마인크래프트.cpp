#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    int a,b,d;
    cin >>a>>b>>d;
    
    int c =a*b;
    int arr[c];
    for(int i=0;i<c;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+c);
    
    int floor=0;
   long long e;
  
   //cout << arr[c-1]<<"\n";
   for(int k=0;k<=arr[c-1];k++)
  {
      int y=d;
      long long lowneeds = 0;
      long long block=0;
    for(int i=0;i<c;i++)
    {
        if(k>arr[i])
        {
            lowneeds = lowneeds + k-arr[i];
            block=block+k-arr[i];
        }
        if(k<arr[i])
        {
           lowneeds = lowneeds + (arr[i]-k)*2;
           y=y+arr[i]-k;
        }
    }
    if(k==0)
    {
       // cout << arr[c-1]<<"\n";
       e=lowneeds;
       //cout<<e<<"\n";
    }
     
   // if(block<=d)
    //{
    if(e>=lowneeds&&block<=y)
    {
        e=lowneeds;
        floor = k;
    }
   // }
  }
   
   
  
  
      cout << e<<" "<<floor;
  
  
   
}
