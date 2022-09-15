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
	vector<int> l(n);
	rep(i, n) cin >> l[i];
	sort(l.begin(), l.end());

	int cnt = 0;
	rep(i, n)rep2(j, i+1, n)rep2(k, j+1, n) {
		if (l[i] == l[j] || l[j] == l[k] || l[k] == l[i]) continue;
		if (l[i] + l[j] > l[k]) cnt++;
	}
	cout << cnt << endl;
	return 0;
}
