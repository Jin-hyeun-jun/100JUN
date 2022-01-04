#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a;
    int arr[a];
    cin >> a;
    for(int i=0;i<a;i++)
    {
        cin >> arr[i];
        
    }
   
    sort(arr,arr+a);
    int b;
    cin>>b;
    int arr1[b];
    for(int i=0;i<b;i++)
    {
        cin >> arr1[i];
         
    }
    
    for(int i=0;i<b;i++)
    {
        if(binary_search(arr, arr+a, arr1[i])) 
        {
            cout << "1" << "\n";
         
         }   
         else
           {
            cout << "0" << "\n";
           }
    }
    
}
