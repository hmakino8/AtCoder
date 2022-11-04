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
	int x;
	cin >> x;

	if (x >= 90) cout << "expert" << endl;
	else if (x >= 70) cout << 90 - x << endl;
	else if (x >= 40) cout << 70 - x << endl;
	else cout << 40 - x << endl;
	return 0;
}
