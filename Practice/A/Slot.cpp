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
	string s;
	cin >> s;
	if (s[0] == s[1] && s[1] == s[2] && s[2] == s[0]) cout << "Won" << endl;
	else cout << "Lost" << endl;
	return 0;
}
