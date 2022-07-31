//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int n, cnt = 0;

	cin >> n;
	int a[n];

	rep(i, 0, n) cin >> a[i];
	rep(i, 0, n) {
		if (1 <= i and a[i - 1] == a[i]) {
			cnt++;
			i++;
		}
	}
	cout << cnt << endl;
}
