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
	int a,b,c;
	cin>>a>>b>>c;
	a -= b;
	if (a == 0) cout << c << endl;
	else if (c > a) cout << c - a << endl;
	else cout << 0 << endl;
}
