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
	int a, b;
	cin >> a >> b;

	if (0 < a && b == 0) cout << "Gold" << endl;
	else if (a == 0 && 0 < b) cout << "Silver" << endl;
	else if (0 < a && 0 < b) cout << "Alloy" << endl;
	return 0;
}
