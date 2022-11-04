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
	string s, s2;
	cin >> s >> s2;

	int a = s[0]+s[1]+s[2];
	int b = s2[0]+s2[1]+s2[2];
	cout << (a > b ? a-'0'*3 : b-'0'*3) << endl;
	return 0;
}
