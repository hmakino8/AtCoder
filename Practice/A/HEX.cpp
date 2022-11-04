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
	char x, y;
	cin >> x >> y;

	if (x == y) cout << '=' << endl;
	else if (x < y) cout << '<' << endl;
	else cout << '>' << endl;
	return 0;
}
