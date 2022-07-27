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

	int low = 0, upp = 0, same = 0;
	rep(i, s.size()) {
		if ('a' <= s[i] && s[i] <= 'z') low = 1;
		if ('A' <= s[i] && s[i] <= 'Z') upp = 1;
		rep2(j, i+1, s.size()) if (s[i] == s[j]) same = 1;
	}
	if (low && upp && !same) cout << "Yes\n";
	else cout << "No\n";
}
