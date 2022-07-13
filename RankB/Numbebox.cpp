//#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <cstring>
#include <math.h>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;
using ll = long long;

const int di[] = {1,1,1,0,0,-1,-1,-1};
const int dj[] = {1,0,-1,1,-1,0,-1,1};

int main() {
	int n;

	cin >> n;
	vector<vector<int>> a(n, vector<int>(n));

	rep(i,n) {
		string s;

		cin >> s;
		rep(j,n) {
			a[i][j] = s[j]-'0';
		}
	}

	ll ret = 0;
	rep(si,n)rep(sj,n)rep(k,8) {
		int i = si, j = sj;
		ll tmp = 0;

		rep(l,n) {
			tmp = tmp*10 + a[i][j];
			i += di[k];
			j += dj[k];
			i = (i+n)%n;
			j = (j+n)%n;
		}
		ret = max(tmp, ret);
	}
	cout << ret << endl;
}
