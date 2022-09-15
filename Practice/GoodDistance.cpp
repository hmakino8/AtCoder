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
	int n, d;
	cin >> n >> d;
	vector<vector<int> > x(n, vector<int>(d));
	rep(i, n)rep(j, d) cin >> x[i][j];

	int cnt = 0;
	rep(i, n)rep2(j, i+1, n) {
		int dist = 0;
		rep(k, d) dist += pow(x[j][k] - x[i][k],2);
		if(sqrt(dist) == ceil(sqrt(dist))) cnt++;
	}
	cout << cnt << endl;
	return 0;
}
