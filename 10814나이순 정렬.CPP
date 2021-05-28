#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(pair<int, string>a, pair<int, string>b)
{
    return a.first < b.first;
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);



    int a;
    cin >> a;
    vector<pair<int, string>>old(a);
    for (int i = 0; i < a; i++)
    {
        cin >> old[i].first >> old[i].second;
    }
    stable_sort(old.begin(), old.end(), cmp);
    for (int i = 0; i < a; i++)
    {
        cout << old[i].first << " " << old[i].second << "\n";
    }



}
//cout <<
//cin >>