#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
bool desc(int a, int b){ 
  return a > b; 
} 

int main() {
    double a,d=0;
    int b/*산술평균*/,e,f,g=0,p;
    cin >> a;
    vector<int>v;
    vector<int>s;
    int arr[8001]={};
    int u =0;
    for(int i=0;i<a;i++)
    {
        cin >> b;
        arr[b+4000]++;
        d=d+b;
        v.push_back(b);
    }
    for(int i=0;i<=8000;i++)
    {
        if(u<=arr[i])
        {
            u=arr[i];
        }
    }
     //sort(arr, arr+8000, desc); 
    d=d/a;//산술평균
    
    sort(v.begin(),v.end());
    e=v[floor(a/2.0)];//중앙값
    f=v[a-1]-v[0];//최대값 최소값 차이
   int y=0;
    
    for(int i=0;i<=8000;i++)
    {
        /*
        if(g<=arr[i]&&arr[i]!=0)
        {
          
            g=arr[i];//최빈값
            p=i-4000;
            cout<<i<<"\n";
              s.push_back(p);
            
            cout<<"끝"<<"\n";
        }
        */
        
        if(u==arr[i])
        {
        
            //cout<<arr[i]<<"\n";
           
            p=i-4000;
            //cout<<p<<"\n";
           y++;
              s.push_back(p);
            
            //cout<<"끝"<<"\n";
        }
        
    }
     //cout<<"끝"<<"\n";
     sort(s.begin(),s.end());
    
   // for(int i=0;i<s.size();i++)
   // {
      //  cout << s[i] <<"\n";
   // }
    
    //cout<<"끝"<<"\n";
    cout <<round(d)<<"\n";//산술평균
    cout <<e<<"\n";//중앙값
    if(y>1)
    {
    cout <<s[1]<<"\n";//최빈값
    }
    if(y==1)
    {
    cout <<s[0]<<"\n";//최빈값
    }
    cout <<f<<"\n";//최대값 최소값 차이
    
  
    
}
