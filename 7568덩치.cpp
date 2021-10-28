#include <iostream>
#include <string>
#include <stack>
#include <cstring>
#include <algorithm>
using namespace std;

int main() { 
    int a;
    cin >> a;
    int arr[a],arr1[a],arr2[a];
    for(int i=0;i<a;i++)
    {
        arr2[i]=1;
    }
    for(int i=0;i<a;i++)
    {
        cin >> arr[i]>>arr1[i];
    }
    for(int k=0;k<a;k++)
    {
        
     for(int i=0;i<a;i++)
    {
        if(arr[k]<arr[i]&&arr1[k]<arr1[i])
        {
            arr2[k]++;
        }
    }
    }
   
    for(int i=0;i<a;i++)
    {
        cout << arr2[i] <<" ";
    }

}
