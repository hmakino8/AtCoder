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
	vector<int> v(3);
	rep(i, 0, 3) cin >> v[i];

	sort(v.begin(), v.end());
	cout << v[0]+v[1] << endl;
	return 0;
}
