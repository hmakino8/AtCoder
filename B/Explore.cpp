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

int main() {
	long long n,m,t;
	cin>>n>>m>>t;
	vector<int> a(n-1);
	vector<int> y(n);
	rep(i,0,n-1) cin>>a[i];
	rep(i,0,m) {
		int x;
		cin>>x;
		cin>>y[x-1];
	}
	rep(i,0,n-1) {
		t += y[i];
		t -= a[i];
		if (t <= 0) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
