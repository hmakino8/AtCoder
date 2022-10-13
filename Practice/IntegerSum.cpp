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
	int n;
	cin >> n;

	int sum = 0;
	rep(i, 0, n) {
		int tmp = 0;
		cin >> tmp;
		sum += tmp;
	}
	cout << sum << endl;
	return 0;
}
