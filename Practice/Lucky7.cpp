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
	string n;
	cin>>n;
	bool ok = false;
	rep(i,0,n.size()) {
		if (n[i] == '7') ok = true;
	}
	if (ok) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
