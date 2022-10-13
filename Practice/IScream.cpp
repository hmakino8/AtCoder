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
	int a, b, c;
	cin >> a >> b;
	c = a + b;

	if (c >= 15 && b >= 8) cout << 1 << endl;
	else if (c >= 10 && b >= 3) cout << 2 << endl;
	else if (c >= 3) cout << 3 << endl;
	else cout << 4 << endl;
	return 0;
}
