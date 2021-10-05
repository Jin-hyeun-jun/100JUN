#include <iostream>

using namespace std;

int main() {
 int a;
 int b=0;
 int c;
 
  cin >> a;
  
  int i=666;
  while(1)
  {
      c=i;
      while(1)
      {
       
        if(c<666)
        {
              break;
        }
        if(c%1000==666)
        {
            b++;
            if(a==b)
            {
                cout <<i;
                return 0;
            }
            break;
        }
        if(c>=666)
        {
            c=c/10;
        }
      }
      i++;
  }


 
}
