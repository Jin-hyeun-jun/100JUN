#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a,b;
    cin >> a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+a);
    cin >>b;
    int arr1[b];
    for(int i=0;i<b;i++)
    {
        cin >> arr1[i];
    }
    int arr2[b]={};
    
    
    for(int i=0;i<b;i++)
    {
        if(arr[a/2]==arr1[i])
        {
            arr2[i]=1;
             
        }
        
        else if(arr[a/2]>arr1[i])
        {
            for(int k=0;k<a/2;k++)
            {
               
                if(arr[k]==arr1[i])
                {
                    arr2[i] = 1;
                    break;
                    //cout << arr2[i];
                }
                
            }
        }
        
        else if(arr[a/2]<arr1[i])
        {
            for(int k=a/2;k<a;k++)
            {
                if(arr[k]==arr1[i])
                {
                    arr2[i]=1;
                     break;
                }
            }
        }
    }
    
        //cout << arr[a/2] << "\n";
   
   
   for(int i=0;i<b;i++)
   {
        cout << arr2[i] << "\n";
   }
 
}
