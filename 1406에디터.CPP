#include <iostream>
#include <string>
#include <list>
#include<cstdio>
using namespace std;

int main() {
    int a;
    string arr;
    //cin >> arr >>a;
    cin >> arr;
    cin >> a;

    char edi;
    char ins;
    list<char>editor;


    for (auto i : arr)
    {
        editor.push_back(i);
    }

    auto cur = editor.end();

    for (int i = 0; i < a; i++)
    {

        cin >> edi;
        if (edi == 'L')
        {
            if (cur != editor.begin())
            {
                cur--;
            }
        }
        if (edi == 'D')
        {
            if (cur != editor.end())
            {
                cur++;
            }
        }
        if (edi == 'B')
        {
            if (cur != editor.begin())
            {
                cur--;
                cur = editor.erase(cur);//이게 지워진 자리라는 뜻인가..

            }
        }
        if (edi == 'P')
        {

            cin >> ins;
            editor.insert(cur, ins);
        }




    }
    for (auto x : editor)
    {
        cout << x;
    }
    return 0;
}