//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	string s;

	cin >> s;
	rep(i, s.size()) {
		int cnt = 0;
		rep2(j, 0, s.size()) {
			if (i == j) {
				continue ;
			}
			if (s[i] == s[j]) {
				cnt = 1;
				break ;
			}
		}
		if (cnt == 0) {
			cout << s[i] << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}
