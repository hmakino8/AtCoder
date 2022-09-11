//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

//int main() {
//	int n;
//	cin >> n;
//	vector<int> a(n);
//	rep(i, n) cin >> a[i];
//
//	sort(a.begin(), a.end());
//	int tmp = a[0];
//	int cnt = 1;
//	rep(i, n) {
//		if (tmp != a[i]) {
//			cnt++;
//			tmp = a[i];
//		}
//	}
//	cout << cnt << endl;
//}

int main() {
	int n;
	cin >> n;
	set<int> a;
	rep(i, n) {
		int x;
		cin >> x;
		a.insert(x);
	}
	cout << a.size() << endl;
}
