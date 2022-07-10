//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cstring>
#include <math.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

double distance(double a[2], double b[2]) {
	double a0b0 = abs(a[0] - b[0]);
	double a1b1 = abs(a[1] - b[1]);

	return sqrt(a0b0 * a1b1 + a1b1 * a1b1);
}

int main() {
	int n;

	cin >> n;
	float a[2], b[2], c[n][3], tmp[2];

	cin >> a[0] >> a[1] >> b[0] >> b[1];

	rep(i, 0, n)rep(j, 0, 3) cin >> c[i][j];

	double atob = distance(a, b);

	if (atob <= a[1] + b[1]) {
		cout << "Yes" << endl;
		cout << "WTF" << endl;
		return 0;
	}
	for (int i = 1; i < n; i++) {
		double d = distance(a, c[i]);

		if (d <= a[1] + c[i][2]) {
			if (distance(c[i], b) <= c[i][2] + b[1]) {
				cout << "Yes" << endl;
				return 0;
			}
			tmp[0] = c[i][0];
			tmp[1] = c[i][1];
			if (distance(tmp, b) < d) {
				a[0] = tmp[0];
				a[1] = tmp[1];
				i = 0;
			}
		}
	}
	cout << "No" << endl;
}
