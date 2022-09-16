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
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	sort(a.begin(), a.end());

	int cnt = 0;
	rep(i, n) {
		if (x < a[i] || (i == n-1 && x > a[i])) break;
		x -= a[i];
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}
