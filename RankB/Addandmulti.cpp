//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int n, k = 0;
	int ret = 1;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		if (ret * 2 < ret + k)
			ret *= 2;
		else
			ret += k;
	}
	cout << ret << endl;
}
