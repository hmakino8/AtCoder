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
	string a, b, c;
	cin >> a >> b >> c;
	if (a[a.size()-1] == b[0] && b[b.size()-1] == c[0]) {
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
	return 0;
}
