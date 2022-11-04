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

/*
 * グリッド上の原点からのチェビシェフ距離(チェス盤距離)が等しければ、
 * その座標の色は黒もしくは白となる
 *
 * NxN(Nは奇数)のグリッド上の座標(R,C)のチェブシェフ距離
 * max(abs(R-(N/2),abs(C-(N/2)))
 *
 * 3333333
 * 3222223
 * 3211123
 * 3210123
 * 3211123
 * 3222223
 * 3333333
 *
 * 問題文の作図
 *	int main() {
 *	int n = 15;
 *
 *	rep(i,0,n) {
 *		rep(j,0,n) {
 *			if (max(abs(i-n/2),abs(j-n/2))%2) cout << "#";
 *			else cout << ' ';
 *		}
 *		cout << endl;
 *	}
 *	return 0;
 *	}
*/

int main() {
	int r,c;
	cin>>r>>c;

	if (max(abs(r-8),abs(c-8))%2) cout << "white" << endl;
	else cout << "black" << endl;
	return 0;
}

//int main() {
//	int r,c;
//	cin>>r>>c;
//	vector<string> s(15);
//
//	rep(i,0,15)rep(j,0,15) s[i][j] = '#';
//	rep(k,0,3)rep(i,0,15)rep(j,0,15) {
//		if (i%2) {
//			if (i <= j && j <= 14-i) s[i][j] = ' ';
//			if (14-i <= j && j <= i) s[i][j] = ' ';
//		}
//		if (k < 2) {
//			rep(i,0,15)rep(j,0,15) s[i][j] = s[15-j-1][i];
//		}
//	}
//	if (s[r-1][c-1] == '#') cout << "black" << endl;
//	else cout << "white" << endl;
//}
//
