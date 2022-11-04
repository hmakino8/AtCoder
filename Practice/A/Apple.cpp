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
	int x, y, n;
	cin >> x >> y >> n;

	//if (x*3 < y) cout << x*n;
	//else cout << n/3*y + n%3*x;
	cout << min(x*n, n/3*y + n%3*x);
	return 0;
}
