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
	string s,t;
	cin>>s>>t;

	int cnt = 0;
	rep(i,0,3) {
		if (s[i] == t[i]) cnt++;
	}
	cout << cnt << endl;
	return 0;
}
