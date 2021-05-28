#include <iostream>
#include <string>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
    long long a, b;
    cin >> a;
    vector<long long>bi;
    //cout <<a/-2;
    if (a == 0)
    {
        cout << 0;
        return 0;
    }
    while (a != 0)
    {
        if (a % -2 == 0)
        {

            bi.push_back(0);
            a = a / -2;
        }
        else
        {

            a = (a - 1) / -2;


            bi.push_back(1);

        }

    }

    for (int i = bi.size() - 1; i >= 0; i--)
    {
        cout << bi[i];
    }


}