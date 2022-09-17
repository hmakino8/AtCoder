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
	int n, m;
	cin >> n >> m;
	map<int,int> mp;
	rep(i, 0, m) {
		int tmp = 0;
		rep(j, 0, 2) {
			cin >> tmp;
			mp[tmp]++;
		}
	}
	rep(i, 1, n+1) cout << mp[i] << endl;
	return 0;
}
