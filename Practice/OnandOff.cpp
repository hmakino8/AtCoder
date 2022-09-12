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
	int s, t, x;
	cin >> s >> t >> x;
	if (s < t) {
		if (s <= x && x < t) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	else {
		if (s <= x || x < t) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
