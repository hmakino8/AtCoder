//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cstring>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int h, w, x, y;

	cin >> h >> w >> x >> y;

	int cnt = 0;
	if ((x == 1 || x == h) && (y == 1 || y == w)) {
		cnt = 2;
	}
	else if ((1 < x && x < h) && (1 < y && y < w)) {
		cnt = 4;
	}
	else {
		cnt = 3
	}
	return cnt;
}
