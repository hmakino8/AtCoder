//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);

	rep(i, n) cin >> a[i];
	rep(i, n+1) {
		int flag = 1;
		rep(j, n) {
			if (a[j] == i) flag = 0;
		}
		if (flag) {
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}
