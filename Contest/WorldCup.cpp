//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int y;
	cin >> y;
	if (y%4 == 2) {
		cout << y << endl;
	}
	else if (y%4 < 2) {
		cout << y - y%4 + 2 << endl;
	}
	else {
		cout << y - y%4 + 6 << endl;
	}
	return 0;
}
