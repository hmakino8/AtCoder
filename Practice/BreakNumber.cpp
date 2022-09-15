//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <stdio.h>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int n, cnt, tmp = 1, maxi = 0;
	cin >> n;

	rep2(i, 2, n+1) {
		cnt = 0;
		int j = i;
		while (j != 0 && j%2 == 0) {
			j /= 2;
			cnt++;
			if (maxi < cnt) {
				maxi = cnt;
				tmp = i;
			}
		}
		i += 1;
	}
	cout << tmp << endl;
	return 0;
}
