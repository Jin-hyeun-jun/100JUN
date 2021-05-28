#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int a,b;
     cin>>a>>b;
     
     if(b>=45)
     {
         b=b-45;
     }
     else
     {
         b=b+60-45;
         if(a==0)
         {
             a=23;
         }
         else
         {
             a=a-1;
         }
     }

    cout<<a<<" "<<b;
}
