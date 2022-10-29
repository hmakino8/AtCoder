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
	long long a, b, c, d, e, f, dev;
	cin>>a>>b>>c>>d>>e>>f;

	dev = 998244353;
	int mod1, mod2, mod3, mod4;
	int j = 1;

	mod1 = a*b%(a/dev); //5*4%9
	rep(i,0,b) {
		if (a > dev/j) j = 1;
		mod1 = a*j;
		j++;
	}
	j = 1;
	rep(i,0,c) {
		if (mod1 > dev/j) j = 1;
		mod2 = mod1*j;
		j++;
	}
	j = 1;
	rep(i,0,e) {
		if (d > dev/j) j = 1;
		mod3 = d*j;
		j++;
	}
	j = 1;
	rep(i,0,f) {
		if (mod3 > dev/j) j = 1;
		mod4 = mod3*j;
		j++;
	}
	cout << mod2 - mod4 << endl;
	return 0;
}
