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
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	sort(a.begin(), a.end(), greater<int>());
	int A = 0, B = 0;
	rep(i, n) {
		if (i%2 == 0) A += a[i];
		else B += a[i];
	}
	cout << A - B << endl;
	return 0;
}
