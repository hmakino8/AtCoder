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

int main() {
	int n, k, q;

	cin >> n >> k >> q;
	int pos[k];

	rep(i, k) cin >> pos[i];
	rep(i, q) {
		int l;

		cin >> l;
		if (pos[l-1] == n) continue;
		if (l == k || pos[l] > pos[l-1]+1) pos[l-1]++;
	}
	rep(i, k) {
		cout << pos[i];
		if (i < k-1) {
			cout << ' ';
		}
	}
}
