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
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b) cout << c << endl;
	else if (b == c) cout << a << endl;
	else if (c == a) cout << b << endl;
	else cout << 0 << endl;
	return 0;
}
