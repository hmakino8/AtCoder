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
	if (s == "SSS") cout << 0 << endl;
	else if (s == "SRR" || s == "RRS") cout << 2 << endl;
	else if (s == "RRR") cout << 3 << endl;
	else cout << 1 << endl;
	return 0;
}
