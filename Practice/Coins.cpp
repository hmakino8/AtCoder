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
	int a, b, c, x, cnt = 0;
	cin >> a >> b >> c >> x;

	rep(i, a+1)rep(j, b+1)rep(k, c+1) {
		if (x == 500*i + 100*j + 50*k) cnt++;
	}
	cout << cnt << endl;
	return 0;
}
