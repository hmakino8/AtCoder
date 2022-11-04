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

//int main() {
//	int n,q;
//	cin>>n>>q;
//	vector<vector<int> > v(n, vector<int>(0));
//
//	rep(i,0,n) {
//		int l;
//		cin>>l;
//		rep(j,0,l) {
//			int tmp;
//			cin>>tmp;
//			v[i].push_back(tmp);
//		}
//	}
//	rep(i,0,q) {
//		int s,t;
//		cin >> s >> t;
//		cout << v[s-1][t-1] << endl;
//	}
//	return 0;
//}

int main() {
	int n,q;
	cin>>n>>q;
	vector<vector<int> > v(n);

	rep(i,0,n) {
		int l;
		cin>>l;
		v[i].resize(l);
		rep(j,0,l) cin>>v[i][j];
	}
	rep(i,0,q) {
		int s,t;
		cin >> s >> t;
		cout << v[s-1][t-1] << endl;
	}
	return 0;
}
