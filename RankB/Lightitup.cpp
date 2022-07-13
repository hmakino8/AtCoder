//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cmath>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using ll = long long;
using namespace std;

ll distance(int x, int dx, int y, int dy) {
	return ((ll)(x - dx) * (ll)(x - dx) + (ll)(y - dy) * (ll)(y - dy));
}

int main() {
	int N, K;

	cin >> N >> K;
	vector<int> Ai(K);
	rep(i, K) cin >> Ai[i];
	vector<vector<int> > A(K, vector<int>(2));
	vector<vector<int> > X(N - K, vector<int>(2));

	int j = 0;
	rep(i, N) {
		int flag = 0;
		rep(l, K) {
			if (i == Ai[l] - 1) {
				flag++;
				rep(m, 2) cin >> A[l][m];
			}
		}
		if (flag) continue ;
		rep(m, 2) cin >> X[j][m];
		j++;
	}
	ll ret = 0;
	rep(i, N - K) {
		ll tmp = 8e18;
		rep(j, K) {
			ll dist = distance(X[i][0], A[j][0], X[i][1], A[j][1]);
			tmp = min(tmp, dist);
		}
		if (!ret) ret = tmp;
		else ret = max(ret, tmp);
	}
	printf("%.12lf\n", sqrt((double)(ret)));
}
