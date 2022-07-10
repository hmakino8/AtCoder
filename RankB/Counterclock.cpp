//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cstring>
#include <math.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	 double a, b, d, r;
	 double ad = 0, bd = 0, angle = 0;

	cin >> a >> b >> d;
	r = sqrt(a + b);
	angle = abs(acos(a / r) - d);
	cout << angle << endl;
	ad = r * cos(angle);
	bd = r * sin(angle);

	cout << ad << ' ' << bd << endl;
}
