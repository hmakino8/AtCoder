//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <map>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<string> S(n);
	rep(i, n) cin >> S[i];

	int ans = 0;
	rep(s, 1<<n) {
		int now = 0;
		map<char, int> cnt;
		rep(i, n) {
			if (s>>i&1) {
				for (char c : S[i]) {
					cnt[c]++;
					cout << c << cnt[c] << ' ';
				}
				cout << endl;
			}
		}
		cout << endl;
		for (auto p : cnt) if (p.second == k) ++now;
		ans = max(ans, now);
	}
	//cout << ans << endl;
	return 0;
}
