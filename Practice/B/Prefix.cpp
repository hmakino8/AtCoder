//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <stdio.h>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	string s, t;
	cin >> s >> t;
	if (t.size() < s.size()) {
		cout << "No" << endl; return 0;}
	if (s == t) {
		cout << "Yes" << endl; return 0;
	}
	rep(i, s.size()) {
		if (s[i] != t[i]) {
			cout << "No" << endl; return 0;
		}
	}
	cout << "Yes" << endl; return 0;
}
