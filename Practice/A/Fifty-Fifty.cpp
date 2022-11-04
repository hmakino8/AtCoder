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
	cin>>s;
	sort(s.begin(), s.end());

	if (s[0] == s[1] && s[1] != s[2] && s[2] == s[3]) {
		cout << "Yes" << endl;
	}
	else cout << "No" << endl;

}
