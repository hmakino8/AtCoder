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
	int v, t, s, d;
	cin >> v >> t >> s >> d;

	puts(d < v*t || d > v*s ? "Yes" : "No");
	return 0;
}

//int main() {
//	double v, t, s, d;
//	cin >> v >> t >> s >> d;
//
//	if (d/v >= t && d/v <= s) cout << "No" << endl;
//	else cout << "Yes" << endl;
//	return 0;
//}
