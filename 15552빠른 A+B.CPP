#include <iostream>


using namespace std;

int main() {
    int a, b, c;
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b >> c;
        cout << b + c << '\n';
    }


}