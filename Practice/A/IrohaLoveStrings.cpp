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
	int n, l;
	cin >> n >> l;
	vector<string> s(n);

	rep(i, n) cin >> s[i];
	sort(s.begin(), s.end());
	rep(i, n) cout << s[i];
	cout << endl;
	return 0;
}
