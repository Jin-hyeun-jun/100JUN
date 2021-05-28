#include <iostream>
#include<vector>
#include<algorithm>
//if문 공부좀 하장
//vector[]
int arr[2001][2001] = { 0 };
using namespace std;
int uclid(int n, int m)
{
	if (m == 0)
	{
		return n;
	}


	return uclid(m, n % m);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int a, b, c = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		for (int v = 1; v <= i; v++)
		{
			int p = uclid(v, i);
			if (arr[v / p][i / p] == 0)
			{
				arr[v / p][i / p]++;
				c++;
			}
		}


	}
	cout << c;
}