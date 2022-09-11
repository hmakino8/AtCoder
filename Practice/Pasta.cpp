//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

//int main() {
//	int n, m;
//	cin >> n >> m;
//	vector<int> a(n);
//	vector<int> b(m);
//	rep(i, n) cin >> a[i];
//	rep(i, m) cin >> b[i];
//
//	int cnt = 0;
//	rep(i, m)rep(j, n) {
//		if (a[j] < 0 || a[j] != b[i]) continue ;
//		else {
//			a[j] = -1;
//			cnt++;
//			break ;
//		}
//	}
//	if (cnt == m) cout << "Yes" << endl;
//	else cout << "No" << endl;
//	return 0;
//}

int main() {
	int n, m;
	cin >> n >> m;
	map<int, int> mp;
	int tmp;
	rep(i, n) {
		cin >> tmp;
		mp[tmp]++;
	}

	rep(i, m) {
		cin >> tmp;
		if (mp[tmp] == 0) {
			cout << "No" << endl;
			return 0;
		}
		mp[tmp] = 0;
	}
	cout << "Yes" << endl;
	return 0;
}
