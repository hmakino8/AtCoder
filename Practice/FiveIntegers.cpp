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
	map<int, int> mp;
	int cnt = 0;

	rep(i, 5) {
		int tmp = 0;
		cin >> tmp;
		if (mp.find(tmp) != mp.end()) cnt++;
		mp[tmp]++;
	}
	cout << 5 - cnt << endl;
}
