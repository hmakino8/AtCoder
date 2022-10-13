//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <stdio.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	map<int, int> mp;

	rep(i, 0, m) {
		int k = 0;
		cin >> k;
		rep(j, 0, k) {
			int tmp = 0;
			cin >> tmp;
			mp[tmp]++;
		}
	}
	bool ok = true;
	rep(i, 1, n+1) if (mp[i] != 2) ok = false;
	if (ok) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
