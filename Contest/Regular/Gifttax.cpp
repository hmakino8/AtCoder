//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int n, a, b;

	cin >> n >> a >> b;
	vector<int> mn(n);

	int minimum = 0, maximum = 0;
	string s;

	cin >> s;
	rep(i, n) {
		int tmpmini = 0, tmpmax = 0;
		rep(j, n) {
			if (minimum > s[j] - '0') {
				minimum = s[j] - '0';
				tmpmini = j;
			}
		}
		rep(k, n) {
			if (maximum < s[k] - '0') {
				maximum = s[k] - '0';
				tmpmax = k;
			}
		}
		s[tmpmini] += a;
		s[tmpmax] -= b;
	}
	cout << maximum << endl;
}
