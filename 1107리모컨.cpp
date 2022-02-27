#include <iostream>
#include <vector>
#include <algorithm>
bool except_num[10]={0};
using namespace std;

int confirm(int num)
{
    if(num==0)
    {
        if(except_num[0])
        {
            return 0;
        }
        else
        return 1;
    }
    int len=0;
    while(num>0)
    {
        
        
        if(except_num[num%10])
        {
            return 0;
        }
        num=num/10;
        len=len+1;
    }
    return len;
}

int main() {
    int find_num,ex_num;

    
    cin >> find_num >> ex_num;
    
    
    int exceptnum;
    for(int i=0;i<ex_num;i++)
    {
        cin >> exceptnum;
        except_num[exceptnum]=true;
    }
  int gap=abs(find_num-100);
  int gap_num;
  int len;
  int sum;
  if(gap==0)
  {
      cout<< "0";
      return 0;
  }
  for(int i=0;i<1000000;i++)
  {
      if(confirm(i)>0)
      {
           gap_num=abs(i-find_num);
           len=confirm(i);
           sum=gap_num+len; 
        if(gap>sum)
        {
           
            gap=sum; 
            if(gap==0)
            {
                cout<< "0";
                return 0;
            }
        }
      }
  }
   cout <<gap;
}
