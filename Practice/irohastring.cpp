//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int n, l;
	cin >> n >> l;
	vector<string> s(n);
	rep(i, n) cin >> s[i];

	rep(i, n)rep2(j, i+1, n) {
		if (s[i] > s[j]) swap(s[i], s[j]);
	}
	rep(i, n) cout << s[i];
}
