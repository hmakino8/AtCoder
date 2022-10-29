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
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i,0,n) cin >> a[i];

	vector<int> tmp = a;
	sort(tmp.begin(),tmp.end());
	auto it = unique(tmp.begin(),tmp.end());
	tmp.erase(it,tmp.end());

	rep(i,0,n) {
		int cnt = 0;
		rrep(j,n-1,0) {
			cout << a[i] << endl;
			//if (a[i]<tmp[j]) cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}
