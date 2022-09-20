//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <stdio.h>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int n, m;
	map<string, int> mp;
	string tmp;
	set<string> se;
	cin >> n;
	rep(i, n) cin >> tmp, se.insert(tmp), mp[tmp]++;
	cin >> m;
	rep(i, m) cin >> tmp, se.insert(tmp), mp[tmp]--;

	int maximum = -101;
	auto itr = begin(se);
	rep(i, size(se)) maximum = max(maximum, mp[*itr++]);
	maximum = max(maximum, 0);
	cout << maximum << endl;
	return 0;
}
