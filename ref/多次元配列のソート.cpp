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
	vector<int> a(n), b(n);
	rep(i,n) cin >> a[i];
	rep(i,n) cin >> b[i];
	vector<bool> ok(n);

	auto f = [&](vector<int> d, int num) {
		vector<int> p;
		rep(i,n) if (!ok[i]) p.push_back(i);
		auto cmp = [&](int i, int j) {
			if (d[i] != d[j]) return d[i] > d[j];
			return i < j;
		};
		sort(p.begin(), p.end(), cmp);
		rep(i,num) ok[p[i]] = true;
	};

	f(a,x);
	f(b,y);
	rep(i,n) a[i] += b[i];
	f(a,z);

	rep(i,n) if(ok[i]) cout << i+1 << endl;
	return 0;
}
