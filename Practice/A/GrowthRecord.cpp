#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cstring>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
using namespace std;

int main()
{
	int n, m, x, t, d, cnt = 0;

	cin >> n >> m >> x >> t >> d;
	if (m >= x)
		cout << t << endl;
	else
	{
		cout << t - (x - m) * d << endl;
	}
}
