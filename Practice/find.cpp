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
	int n;
	cin >> n;
	vector<int> a(n);
	int maxi = -1;
	rep(i, 0, n) {
		cin >> a[i];
		maxi = max(maxi, a[i]);
	}
	rep(i, 0, n) {
		if (maxi == a[i]) {
			cout << i+1 << endl;
			return 0;
		}
	}
}
