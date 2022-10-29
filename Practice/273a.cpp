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

int f(int k) {
	if (k == 0) return 1;
	return k*f(k-1);
}

int main() {
	int n;
	cin >> n;
	cout << f(n) << endl;
	return 0;
}
