#include <iostream>

using namespace std;
void facto(int n)
{
    int i;
    for (i = n; i > 1; i--)
    {
        n = n * (i - 1);
    }
    cout << n;
}
int main()
{
    int a;
    cin >> a;
    if (a == 0)
    {
        cout << "1";
        return 0;
    }
    facto(a);

}