#include <iostream>
#include<vector>
#include<math.h>
#include<algorithm>
//if문 공부좀 하장
//vector[]

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a, b, c, h = 0;

    cin >> a >> b >> c;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + a);
    /*
    for(int i=0;i<a;i++)
    {
        cout <<arr[i]<<"\n";
    }
    */
    for (int i = 0; i < b; i++)
    {
        int d, e;
        cin >> d >> e;
        if (e > c)
        {
            continue;
        }
        int small = d - (c - e);
        int big = d + (c - e);
        int p = 0, k = a - 1;
        // int mid = (p+a)/2;

        while (p <= k)//이분 탐색. 
        {
            int mid = (p + k) / 2;
            if (arr[mid] >= small && arr[mid] <= big)
            {
                h++;
                break;
            }
            else if (arr[mid] < small)
            {
                p = mid + 1;

            }
            else
            {
                k = mid - 1;
            }
        }

    }
    cout << h;

}