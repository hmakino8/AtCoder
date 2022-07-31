//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int v, a, b, c;
	cin >> v >> a >> b >> c;
	while(1) {
		v -= a;
		if (v < 0) {
			cout << 'F' << endl;
			return 0;
		}
		v -= b;
		if (v < 0) {
			cout << 'M' << endl;
			return 0;
		}
		v -= c;
		if (v < 0) {
			cout << 'T' << endl;
			return 0;
		}
	}
	return 0;
}
