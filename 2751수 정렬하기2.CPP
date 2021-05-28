#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
bool cmp(int a, int b)
{
    return a < b;
}
int main() {
    int a;
    cin >> a;
    vector<int>arr(a);
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), cmp);
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << "\n";
    }


}