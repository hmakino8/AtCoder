//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int n, x, y, z;
	cin >> n >> x >> y >> z;
	vector<int> ma(n);
	vector<int> en(n);
	vector<int> ret(n, 0);
	rep(i, n) cin >> ma[i];
	rep(i, n) cin >> en[i];

	int maximum = -1;
	int k = 0;
	rep(i, x) {
		maximum = -1;
		rep(j, n) maximum = max(maximum, ma[j]);
		rep(j, n) if (maximum == ma[j]) {
			ret[k++] = j+1;
			ma[j] = -2;
			en[j] = -2;
			if (k == x) break ;
		}
	}
	rep(i, y) {
		maximum = -1;
		rep(j, n) maximum = max(maximum, en[j]);
		rep(j, n) if (maximum == en[j]) {
			ret[k++] = j+1;
			ma[j] = -2;
			en[j] = -2;
			if (k == x+y) break ;
		}
	}
	rep(i, z) {
		maximum = -1;
		rep(j, n) maximum = max(maximum, ma[j]+en[j]);
		rep(j, n) if (maximum == ma[j]+en[j]) {
			ret[k++] = j+1;
			ma[j] = -2;
			en[j] = -2;
			if (k == x+y+z) break ;
		}
	}
	sort(ret.begin(), ret.end());
	rep(i, n) {
		if (ret[i] == 0) continue ;
		cout << ret[i] << endl;
	}
}
