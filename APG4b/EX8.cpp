//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int n, pattern, price;
	string text;

	cin >> pattern;

	if (pattern == 1)
		cin >> price >> n;
	else {
		cin >> text >> price >> n;
		cout << text << '!' << endl;
	}
	cout << n * price << endl;
}
