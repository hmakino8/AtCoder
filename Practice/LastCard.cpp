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
	int n, k, a;
	cin >> n >> k >> a;

	int i = a - 1;
	while (k != 0) {
		if (++i > n) i = 1;
		k--;
	}
	cout << i << endl;
	return 0;
}
