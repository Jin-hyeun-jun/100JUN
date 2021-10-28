#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>


using namespace std;


int main() {
 int a,b,c=0;
 stack<int>p;
 vector<char>s;
 cin >> a;
 int d;
 vector<int>arr;
 for(int i=0;i<a;i++)
 {
     cin >> d;
     arr.push_back(d);
 }
 
 //reverse(arr.begin(),arr.end());
 //for(int i=0;i<a;i++)

 for(int i=1;i<=a;i++)
 {
     p.push(i);
     
     s.push_back('+');
     while(!p.empty()&&p.top()==arr[c])
     {
          s.push_back('-');
          
         p.pop();
         c++;
     }
 }
 
 if(!p.empty())
 {
     cout << "NO";
     return 0;
 }

 for(int i=0;i<s.size();i++)
 {
     cout << s[i] <<"\n";
 }

}
