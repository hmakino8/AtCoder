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
	int c[3][3];
	rep(i, 0, 3)rep(j, 0, 3) cin >> c[i][j];

	int a[3], b[3];
	rep(i, 0, 101) {
		a[0] = i;
		b[0] = c[0][0]-a[0];
		b[1] = c[0][1]-a[0];
		b[2] = c[0][2]-a[0];
		a[1] = c[1][0]-b[0];
		a[2] = c[2][0]-b[0];

		int cnt = 0;
		rep(j, 0, 3)rep(k, 0, 3) {
			if (a[j]+b[k] == c[j][k]) cnt++;
			if (cnt == 9) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
	return 0;
}
