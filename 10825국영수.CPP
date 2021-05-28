#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool cmp(pair<pair<string, int>, pair<int, int>>a, pair<pair<string, int>, pair<int, int>>b)
{
    if (a.first.second != b.first.second)
    {
        return a.first.second > b.first.second;
    }
    if (a.first.second == b.first.second)
    {
        if (a.second.first != b.second.first)
        {
            return a.second.first < b.second.first;
        }

        if (a.second.first == b.second.first)
        {
            if (a.second.second != b.second.second)
            {
                return a.second.second > b.second.second;
            }
            if (a.second.second == b.second.second)
            {
                return a.first.first < b.first.first;
            }
        }
    }


}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);



    int a;
    cin >> a;
    vector<pair<pair<string, int>, pair<int, int>>> old(a);
    for (int i = 0; i < a; i++)
    {
        cin >> old[i].first.first >> old[i].first.second >> old[i].second.first >> old[i].second.second;
    }
    sort(old.begin(), old.end(), cmp);
    for (int i = 0; i < a; i++)
    {
        cout << old[i].first.first << "\n";
    }



}
//cout <<
//cin >>