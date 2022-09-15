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
	int n;
	cin >> n;
	rep2(i, 1, 10)rep2(j, 1, 10) {
		if (i*j == n) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}
