#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int a, b, c = 0;
    cin >> a;
    vector<int>per(a);
    for (int i = 0; i < a; i++)
    {
        cin >> per[i];
    }
    sort(per.begin(), per.end());

    while (next_permutation(per.begin(), per.end()) != 0)
    {
        b = 0;
        for (int i = 0; i < a - 1; i++)
        {
            b = b + abs(per[i] - per[i + 1]);

        }
        c = max(c, b);
    }

    cout << c;
}