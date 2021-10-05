#include <iostream>
#include <algorithm>



using namespace std;


int main() {
 int a,b,d=0,e;
 int arr[a];

 cin >> a>>b;
 arr[a];
 for(int i=0;i<a;i++)
 {
     cin >> arr[i]; 
 }
 sort(arr,arr+a);
 

long long low = 1;
long long high = arr[a-1];
long long mid = 0;
int anw=0;




while(low<=high)
{
    d=0;
    mid=(low+high)/2;
    for(int i=0;i<a;i++)
    {
        d=d+arr[i]/mid;
    }
    
    if(d>=b)
    {
        
        low=mid+1;
         if(mid>=anw)
    {
        anw=mid;
    }
         
    }
    if(d<b)
    {
         high=mid-1;
    }
   
   
}

cout<<anw;

}
