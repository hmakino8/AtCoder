//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;

	cin >> n;
	vector<string> arg(n);

	for (int i = 0; i < n; i++) {
		cin >> arg.at(i);
	}
	for (auto v: arg) {
		if (v == "Y") {
			cout << "Four" << endl;
			return (0);
		}
	}
	cout << "Three" << endl;
}
