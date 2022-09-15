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
	string s, res;
	cin >> s;
	rep2(i, 0, s.size()) if (i == 0 || (i+1)%2 != 0) res += s[i];
	cout << res << endl;
	return 0;
}
