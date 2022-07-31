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
	vector<int> pos(n), a(n);

	rep(i, n) cin >> a[i];
	rep(i, n)rep(j, i + 1) pos[j] += a[i];
	int p = 0;
	rep(i, n) if (pos[i] >= 4) p++;
	cout << p << endl;
}

//int main() {
//	int n, p = 0;
//
//	cin >> n;
//	vector<int> pos(4), a(n);
//
//	rep(i, n) cin >> a[i];
//	rep(i, n)rrep(j, 3, 0) {
//		pos[0] = 1;
//		if (pos[j] > 0) {
//			pos[j] = 0;
//			if (j + a[i] >= 4) {
//				p++;
//				continue ;
//			}
//			pos[j + a[i]] = 1;
//		}
//	}
//	cout << p << endl;
//}
//
