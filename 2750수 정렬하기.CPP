#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(int a, int b)
{


    return a < b;
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);



    int a;
    cin >> a;
    vector<int>old(a);
    for (int i = 0; i < a; i++)
    {
        cin >> old[i];
    }
    sort(old.begin(), old.end(), cmp);
    for (int i = 0; i < a; i++)
    {
        cout << old[i] << "\n";
    }



}
//cout <<
//cin >>