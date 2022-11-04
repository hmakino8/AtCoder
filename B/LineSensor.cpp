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
 * 出力方法はスペース区切りではなく、改行区切りでも問題ない
 *
 * 24~26行目の回答は以下でも良い
 * rep(i,0,h)rep(j,0,w) {
 * if (s[i][j] == '#') x[i]++;
 * }
*/

int main() {
	int h,w;
	cin>>h>>w;
	vector<string> s(h);
	vector<int> x(w);

	rep(i,0,h) cin>>s[i];
	rep(i,0,w)rep(j,0,h) {
		if (s[j][i] == '#') x[i]++;
	}
	rep(i,0,w) cout << x[i] << endl;
	return 0;
}
