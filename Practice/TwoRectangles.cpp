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
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (a*b >= c*d) cout << a*b << endl;
	else cout << c*d << endl;
	return 0;
}
