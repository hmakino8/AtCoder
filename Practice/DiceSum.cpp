//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int n, m, k;
	cin>>n>>m>>k;
	vector<int> num(50);
	rep2(i, 1, 51) num[i] = i;

	int ret = 0;
	rep(s, 1<<m) {
		int total = 0;
		int cnt = 0;

		rep(i, n)if(s>>i&1) cnt++;
		if (cnt != n) continue ;
		rep(i, n)if(s>>i&1) {
			total += num[i];
			cout << num[i];
		}
		cout << endl;
		if (total <= k) ret++;
		ret %= 998244353;
	}
	//cout << ret << endl;
}
