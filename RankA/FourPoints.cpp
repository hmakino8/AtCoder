//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	vector<int> x(3);
	vector<int> y(3);
	rep(i, 3) {
		cin >> x[i];
		cin >> y[i];
	}
	cout << (x[0]^x[1]^x[2]) << ' ' << (y[0]^y[1]^y[2]) << endl;
}
