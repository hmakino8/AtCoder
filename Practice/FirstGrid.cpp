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
	string s1, s2;
	cin >> s1 >> s2;
	if (s1 == ".#" && s2 == "#.") cout << "No" << endl;
	else if (s2 == ".#" && s1 == "#.") cout << "No" << endl;
	else cout << "Yes" << endl;
	return 0;
}
