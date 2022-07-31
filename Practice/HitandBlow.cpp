//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	rep(i, n) cin >> a[i];
	rep(i, n) cin >> b[i];

	int ret1 = 0, ret2 = 0;
	rep(i, n)rep(j, n) {
		if (a[i] == b[j]) {
			if (i == j) ret1++;
			else ret2++;
		}
	}
	cout << ret1 << endl;
	cout << ret2 << endl;
}
