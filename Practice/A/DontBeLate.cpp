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
	int d,t,s;
	cin>>d>>t>>s;
	if (d/s+(d%s>0) <= t) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
