//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	string s, ret = "";
	cin >> s;

	if (s.size() == 1) {
		cout << s << endl;
		return 0;
	}

	rep(i, s.size()) {
		if (s[i] != 'B') ret += s[i];
		else if (ret != "") ret.pop_back();
	}
	cout << ret << endl;
}
