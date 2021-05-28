#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return b.first > a.first;
    }
    return a.second < b.second;
}
int main() {
    int a, b, c = 0;
    cin >> a;
    vector<pair<int, int>>per(a);
    for (int i = 0; i < a; i++)
    {
        cin >> per[i].first >> per[i].second;
    }
    sort(per.begin(), per.end(), cmp);
    for (int i = 0; i < a; i++)
    {
        cout << per[i].first << " " << per[i].second << "\n";
    }


}