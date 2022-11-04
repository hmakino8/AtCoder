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
	vector<vector<bool> > table(n, vector<bool>(n));

	rep(i, 0, m) {
		int k;
		cin >> k;
		vector<int> tmp(k);
		rep(j, 0, k) cin >> tmp[j], tmp[j]--;
		rep(l, 0, k)rep(m, 0, k) {
			table[tmp[l]][tmp[m]] = true;
		}
	}
	rep(i, 0, n)rep(j, 0, n) {
		if (!table[i][j]) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
