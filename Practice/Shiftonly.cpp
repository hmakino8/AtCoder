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
	int n = 0, even = 0, mini = 1000000001;
	cin >> n;

	rep(i, n) {
		cin >> even;
		int cnt = 0;
		while (even != 0 && even%2 == 0) {
			even /= 2;
			cnt++;
		}
		mini = min(mini, cnt);
	}
	cout << mini << endl;
	return 0;
}
