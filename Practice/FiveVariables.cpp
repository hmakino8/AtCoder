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
	int res;

	rep(i,0,5) {
		int tmp;
		cin >> tmp;
		if (!tmp) res = i+1;
	}
	cout << res << endl;
	return 0;
}
