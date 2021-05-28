#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(pair<int, int>a, pair<int, int>b)
{

    if (a.first == b.first)
        return a.second < b.second;
    else
        return a.first < b.first;
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);



    int a;
    cin >> a;
    vector<pair<int, int>>old(a);
    for (int i = 0; i < a; i++)
    {
        cin >> old[i].first >> old[i].second;
    }
    sort(old.begin(), old.end(), cmp);
    for (int i = 0; i < a; i++)
    {
        cout << old[i].first << " " << old[i].second << "\n";
    }



}
//cout <<
//cin >>