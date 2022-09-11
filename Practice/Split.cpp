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
	string s;
	cin >> s;

	if (s[0] == '0') {
		cout << "No";
		return 0;
	}
	string l[7];
	if (s[6] == '1') l[0] = '1';
	else l[0] = '0';
	if (s[3] == '1') l[1] = '1';
	else l[1] = '0';
	if (s[1] == '0' && s[7] == '0') l[2] = '0';
	else l[2] = '1';
	l[3] = '1';
	if (s[2] == '0' && s[8] == '0') l[4] = '0';
	if (s[5] == '1') l[5] = '1';
	else l[5] = '0';
	if (s[9] == '1') l[6] = '1';
	else l[6] = '0';

	if (l[0] == '1' && l[2] == '1') {

	}
}
