//#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <iostream>
#include <stdio.h>
//#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b;
	string op;

	cin >> n >> a;

	for (int i = 0; i < n; i++) {
		cin >> op >> b;
		if (op == "+")
			a += b;
		if (op == "-")
			a -= b;
		if (op == "*")
			a *= b;
		if (op == "/") {
			if (b == 0) {
				cout << "error" << endl;
				//return (1);
				break ;
			}
			a /= b;
		}
		cout << i + 1 << ":" << a << endl;
	}
}
