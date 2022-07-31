/* ex (n, m) = (5, 6)
 * (Ui, Vj) = (1, 5), (4, 5), (2, 3), (1, 4), (3, 5), (2, 5)
 * (Ui-1, Vj-1)をT(true)としたbool型２次元配列adjを用意。
 *
 * adj[i][j] (0<=i<n, 0<=j<=n)
 * F F F T F
 * F F T F T
 * F T F F T
 * T F F F T
 * T T T T F
 *
 * △abcが成り立ち,かつa<b<cを満たす頂点(a, b, c)となる
 * 3つの辺の組み合わせを考える。
 *
 * (Ui, Vj) = (a, b) (b, c) (c, a)
 * (Ui, Vj) = (a, b) (c, a) (c, b) etc...
 *
 * 0<=i<n,0<=j<n,0<=k<n (j=i+1, k=j+1)の時,
 * adj[i][j]=true かつ adj[j][k]=true かつ adj[k][i]=trueを満たす
 * 組み合わせとなる。
 */

//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<bool> > adj(n, vector<bool>(n));
	rep(i, m) {
		int u, v;
		cin >> u >> v;
		u -= 1, v-= 1;
		adj[u][v] = adj[v][u] = true;
	}

	int ans = 0;
	rep(i, n)rep2(j, i+1, n)rep2(k, j+1, n) {
		if (adj[i][j] && adj[j][k] && adj[k][i]) ans++;
	}
	cout << ans << endl;
	return 0;
}
