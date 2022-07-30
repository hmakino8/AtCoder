//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;

	int flag = 0;
	rep(i, n/2) {
		if (s[i] != s[n-1-i]) {
			flag = 1;
			break ;
		}
	}
	if (!flag) {
		cout << "Yes\n";
		return 0;
	}

	rep(i, n-1) {
		flag = 0;
		string tmp = s;
		tmp[i] = 'A';
		tmp[i+1] = 'B';
		cout << tmp << endl;
		rep(j, n/2) {
			if (tmp[j] != tmp[n-1-j]) {
				flag = 1;
				break ;
			}
		}
		if (!flag) {
			cout << "Yes\n";
			return 0;
		}
	}
	cout << "No\n";
	return 0;
}
