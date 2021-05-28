#include <iostream>

using namespace std;


int main()
{
    int a, b = 0;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        int k = i;
        while (k % 5 == 0)
        {

            if (k % 5 == 0)
            {
                b++;
                //cout <<i<<"\n";
            }
            k = k / 5;
        }

    }
    cout << b;
}