//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <stdio.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	string s, t;
	cin>>s>>t;
	bool ok = true;

	rep(i, 0, s.size()) {
		if (s[i] != t[i]) ok = false;
	}
	if (ok) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
