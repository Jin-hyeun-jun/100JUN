#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int a,b;
    scanf("%d" ,&a);
    int arr[10001]={};
   
    for(int i =0;i<a;i++)
    {
       scanf("%d" ,&b);
        arr[b]++;
    }
    for(int i=1;i<=10000;i++)
    {
        if(arr[i]>0)
        {
            for(int k=0;k<arr[i];k++)
            {
            printf("%d\n",i);
            }
        }
    }

    
}
