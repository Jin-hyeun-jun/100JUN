#include <iostream>
#include <string>
#include <stack>
#include <cstring>

using namespace std;

int main() { 
    int i=0;
     
    while(true)
    {
    string input;
    getline(cin, input);
    stack<char>eq;
    if (input == ".") {
        
            break;
        }
        for(int i=0;i<input.length();i++)
        {
            if(input[i]=='['||input[i]==']'||input[i]==')'||input[i]=='(')
            {
                if(eq.empty())
                {
                    if(input[i]=='[')
                    {
                        eq.push('[');
                    }
                    else if(input[i]=='(')
                    {
                        eq.push('(');
                    }
                    else
                    {
                        eq.push(')');
                        break;
                        
                    }
                }
                else if(!eq.empty())
                {
                 
                   
                    if(eq.top()=='['&&input[i]==']')
                    {
                        eq.pop();
                    }
                     else if(eq.top()=='('&&input[i]==')')
                    {
                        eq.pop();
                    }
                    else
                    {
                        if(input[i]=='[')
                        {
                        eq.push('[');
                        }
                         if(input[i]=='(')
                        {
                         eq.push('(');
                        }
                         if(input[i]==']')
                        {
                         eq.push(']');
                        }
                         if(input[i]==')')
                        {
                         eq.push(')');
                        }
                    }
                }
            }
             
       
        }
        
        if(eq.empty())
        {
            cout << "yes"<<"\n";
        }
        else
        {
            cout << "no"<<"\n";
        }
      
        
    }
    

}
