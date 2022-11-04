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
	vector<int> a(10);
	vector<int> b(7);

	rep(i,0,10) {
		char c;
		cin >> c;
		if (c == '1') a[i]++;
	}

	if (a[0]) {
		cout << "No" << endl;
		return 0;
	}

	if (a[6]) b[0]++;
	if (a[3]) b[1]++;
	if (a[1] || a[7]) b[2]++;
	if (a[4]) b[3]++;
	if (a[2] || a[8]) b[4]++;
	if (a[5]) b[5]++;
	if (a[9]) b[6]++;

	rep(i,0,7)rep(j,i+2,7) {
		if (b[i] && b[j]) {
			rep(k,i+1,j) {
				if (!b[k]) {
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}

	cout << "No" << endl;
	return 0;
}
