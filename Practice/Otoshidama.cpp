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
	int n;
	long long y;
	cin >> n >> y;

	rep(a, n+1)rep(b, n+1) {
		int c = n - (a+b);
		if (c >= 0 && 10000LL*a + 5000LL*b + 1000LL*c == y) {
			printf("%d %d %d\n", a, b, c);
			return 0;
		}
	}
	printf("%d %d %d\n",-1,-1,-1);
	return 0;
}
