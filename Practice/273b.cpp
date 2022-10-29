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
	long long x;
	int k;
	cin >> x >> k;

	rep(i,0,k) {
		long long mul = 1;
		rep(j,1,i+1) mul *= 10;

		int tmp = (x%mul)%(mul*10);
		cout << tmp << endl;
		if (tmp>=5) x += mul*10;
		x /= mul*10;
		x *= mul*10;
	}
	cout << x << endl;
	return 0;
}
