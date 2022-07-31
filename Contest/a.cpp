//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	int cnt = 0;
	rep(i, n)rep2(j, i+1, n) {
		if (a[i] <= a[j] && a[i] == i+1 && a[j] == j+1) cnt++;
		else if (a[i] >= a[j] && a[i] == j+1 && a[j] == i+1) cnt++;
	}
	cout << cnt << endl;
}
