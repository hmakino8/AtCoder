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
	int a, b, c, x, y;
	cin >> a >> b >> c >> x >> y;

	int res = INT32_MAX;
	rep(ab, max(x,y)*2+1) {
		int sum = 0;

		sum += c*ab;
		int xcnt = x - ab/2;
		int ycnt = y - ab/2;

		if (0 < xcnt) sum += a*xcnt;
		if (0 < ycnt) sum += b*ycnt;
		res = min(res, sum);
	}
	cout << res << endl;
	return 0;
}

//int main() {
//	int a, b, c, x, y;
//	cin >> a >> b >> c >> x >> y;
//
//	int sum = 0;
//	if (c*2 < a+b) {
//		if (c*max(x, y)*2 < a*x + b*y) {
//			sum += c*max(x, y)*2;
//			cout << sum << endl;
//			return 0;
//		}
//		if (x > y) sum += c*y*2 + a*(x-y);
//		else sum += c*x*2 + a*(y-x);
//	}
//	else sum = a*x + b*y;
//	cout << sum << endl;
//	return 0;
//}
