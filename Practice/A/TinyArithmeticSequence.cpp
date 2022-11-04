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
	vector<int> an(3);
	rep(i, 3) cin >> an[i];
	sort(an.begin(), an.end());
	if (an[1] - an[0] == an[2] - an[1]) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
