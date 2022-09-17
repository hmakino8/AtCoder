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
	int w, h, n;
	cin >> w >> h >> n;
	int xmax = w, xmin = 0, ymax = h, ymin = 0;

	rep(i, n) {
		int x, y, a; cin >> x >> y >> a;
		if (a == 1) xmin = max(xmin, x);
		else if (a == 2) xmax = min(xmax, x);
		else if (a == 3) ymin = max(ymin, y);
		else ymax = min(ymax, y);
	}
	if (xmax <= xmin || ymax <= ymin) cout << 0 << endl;
	else cout << (xmax-xmin) * (ymax-ymin) << endl;
	return 0;
}
