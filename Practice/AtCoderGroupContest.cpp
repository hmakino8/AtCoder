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
	int n;
	cin >> n;
	vector<long long> a(3*n);
	rep(i,3*n) cin >> a[i];
	sort(a.begin(), a.end(), greater<int>());

	long long total = 0;
	int cnt = 0;
	rep2(i,1,3*n) {
		total += a[i];
		i += 1;
		if (++cnt >= n) break;
	}
	cout << total << endl;
	return 0;
}
