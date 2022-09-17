//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
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
	string s;
	cin >> s;

	set<char> se;
	rep(i, s.size()) se.insert(s[i]);

	auto cur = begin(se);
	auto end = rbegin(se);
	for(char i = 'a'; i <= 'z'; i++) {
		if (*cur != i) {
			cout << i << endl;
			break;
		}
		if (*cur++ == *end) {
			if (i == 'z') cout << "None" << endl;
			else cout << char(i+1) << endl;
			break;
		}
	}
	return 0;
}
