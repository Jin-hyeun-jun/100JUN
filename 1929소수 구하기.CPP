#include <iostream>

using namespace std;
bool arr[1100001] = { 0 };
//void sosu()
//{
 //   
//}
int main() {
    long long a, b;
    long long c;
    //cout << arr[6]<<"\n";
    cin >> a >> b;
    arr[1] = 1;
    //cout << arr[6]<<"\n";
    for (long long i = 2; i <= 1000000; i++)
    {
        if (arr[i] == 0)
        {
            c = i * i;
            //cout << c << "\n";
            for (long long k = c; k <= 1000000; k = k + i)
            {
                arr[k] = 1;

            }
        }

    }
    // cout << arr[6]<<"\n";

    for (long long i = a; i <= b; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << "\n";
        }
    }



}