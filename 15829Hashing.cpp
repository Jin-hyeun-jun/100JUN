#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a;
    cin >>a;
    char arr[a];
    long long b=0;
    long long mul=1;
    for(int i=0;i<a;i++)
    {
        cin >> arr[i];
        b = (b + (arr[i]-'a'+1)*mul)%1234567891;
          
        mul = 31*mul%1234567891;
        
    }

    cout<<b;
}
