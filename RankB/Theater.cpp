//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, total;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int l, r;
		cin >> l >> r;
		total += r - l + 1; 
	}
	cout << total << endl;
}
