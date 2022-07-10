//#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, a, b;

	cin >> x >> a >> b;

	cout << ++x << endl;
	x *= a + b;
	cout << x << endl;
	x *= x;
	cout << x << endl;
	cout << --x << endl;
}
