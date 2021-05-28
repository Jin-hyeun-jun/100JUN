#include<iostream>
#include<vector>
using namespace std;


int main() {
    int a, b, d;
    cin >> a;
    vector<pair<int, int>> c;
    for (int i = 1; i <= a; i++)
    {
        cin >> b;
        c.push_back(make_pair(i, b));
    }
    for (int k = 0; k < a; k++)
    {
        cout << c.front().first << " ";
        d = c.front().second;
        c.erase(c.begin());
        if (d > 0)
        {
            for (int i = 0; i < d - 1; i++)
            {
                c.push_back(c.front());
                c.erase(c.begin());
            }

        }
        if (d < 0)
        {
            for (int i = 0; i < abs(d); i++)
            {
                c.insert(c.begin(), c.back());
                c.pop_back();
            }
        }

    }


}