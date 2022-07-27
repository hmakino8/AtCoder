//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int n, x, y, z;

	cin >> n >> x >> y >> z;
	vector<vector<vector<int> > > Tn(n, n, vector<int>(2));
	vector<vector<int> > Bn(n, vector<int>(2));
	vector<int> ret(n);

	rep(i, n) {
		cin >> An[i][0];
		An[i][1] = i + 1;
	}
	rep(i, n) {
		cin >> Bn[i][0];
		Bn[i][1] = i + 1;
	}

	rep(i, n)rep2(j, i + 1, n) {
		if (An[i][0] < An[j][0]) {
			swap(An[i], An[j]);
		}
	}
	rep(i, x) {
		ret[i] = An[i][1];
		An[i][0] = -1000;
		Bn[i][0] = -1000;
	}
	rep(i, n)rep2(j, i + 1, n) {
		if (Bn[i][0] < Bn[j][0]) {
			swap(Bn[i], Bn[j]);
		}
	}
	rep(i, y) {
		ret[x + 1 + i] = Bn[i][1];
		An[i][0] = -1000;
		Bn[i][0] = -1000;
	}
	rep(i, n)rep2(j, i + 1, n) {
		if (An[i][0] + Bn[i][0] < An[j][0] + Bn[j][0]) {
			swap(An[i], An[j]);
		}
	}
	rep(i, z) {
		ret[x + y + 1 + i] = An[i][1];
	}
	rep(i, n) {
		if (ret[i])
		cout << ret[i] << endl;
}
