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
	int n,k;
	cin >> n >> k;
	int a[n];
	map<int,int> mp;

	rep(i, n) cin >> a[i], mp[a[i]]++;
	vector<int> v;
	for(auto itr:mp) v.push_back(itr.second);
	sort(v.begin(), v.end());

	int type = v.size()-k, cnt = 0;
	rep(i, type) cnt += v[i];
	cout << cnt << endl;
	return 0;
}
