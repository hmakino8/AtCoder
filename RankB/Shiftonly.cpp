//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, cnt = 0;
	cin >> n;

	vector<int> vec(n);

	while (1)
	{
		for (int i = 0; i < n; i++) {
			if (!cnt)
				cin >> vec[i];
			if (vec[i] % 2) {
				cout << cnt << endl;
				return (0);
			}
		}
		for (int i = 0; i < n; i++) {
			vec[i] /= 2;
		}
		cnt++;
	}
	cout << cnt << endl;
}
