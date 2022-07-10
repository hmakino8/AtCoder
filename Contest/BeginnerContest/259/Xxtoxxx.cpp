//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cstring>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	string s, t;

	cin >> s >> t;
	if (s[0] != t[0]) {
		cout << "No" << endl;
		return (0);
	}
	for (int i = 1, j = 1; ; i++, j++) {
		for (; s[i] == t[j]; i++, j++) {
			if (not s[i] || not t[j]) {
				cout << "Yes" << endl;
				return 0;
			}
		}
		if (i > 1 and s[i - 2] == s[i - 1] and \
			s[i - 1] == t[j]) {
			for (; s[i - 1] == t[j]; j++) {
				if (not t[j]) {
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
		else if (i > 1) {
			cout << "No" << endl;
			return 0;
		}
	}
}
