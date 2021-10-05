#include <iostream>
#include <deque>

using namespace std;

int main() {
    int a,b,c;
   cin >> a;
   deque<int>dq;
   string input;
   for(int i=0;i<a;i++)
   {
       cin >> input;
       if(input =="push_front")
       {
           cin >> b;
           dq.push_front(b);
       }
       if(input =="push_back")
       {
           cin >> c;
           dq.push_back(c);
       }  
       if(input =="pop_front")
       {
           if(dq.empty())
           {
               cout << "-1"<<"\n";
           }
           else
           {
           cout << dq.front()<<"\n";
           dq.pop_front();
           }
       }
       if(input =="pop_back")
       {
           if(dq.empty())
           {
               cout << "-1"<<"\n";
           }
           else
           {
            cout << dq.back()<<"\n";
            dq.pop_back();
           }
       }
        if(input =="size")
       {
           cout << dq.size()<<"\n";
       }
       if(input =="empty")
       {
           cout<< dq.empty()<<"\n";
       }
        if(input =="front")
       {
           if(dq.empty())
           {
               cout << "-1"<<"\n";
           }
           else
            cout << dq.front()<<"\n";
       }
       if(input =="back")
       {
           if(dq.empty())
           {
               cout << "-1"<<"\n";
           }
           else
           cout << dq.back()<<"\n";
       }
   }
   
   
}
