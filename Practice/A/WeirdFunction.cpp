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

int f(int x) {
	return (x*x + 2*x + 3);
}

int main() {
	int t;
	cin >> t;
	cout << f(f(f(t)+t) + f(f(t))) << endl;
}