//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cstring>
#define rep(i, b) for (int i = 0; i < b; i++)
#define rep2(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
using namespace std;

int main()
{
	const int si[] = {1, -1, 0, 0};
	const int sj[] = {0, 0, -1, 1};

	int h, w, i, j;

	cin >> h >> w >> i >> j;

	int cnt = 0;
	rep(k, 4) {
		int x = i, y = j;
		x += si[k];
		y += sj[k];
		if ((x < 1 || h < x) || (y < 1 || w < y)) {
			continue;
		}
		cnt++;
	}
	cout << cnt << endl;
}
