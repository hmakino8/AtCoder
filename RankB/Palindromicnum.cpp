//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b, cnt = 0;
	bool flag = true;
	string s;

	cin >> a >> b;

	for (; a <= b; a++) {
		s = to_string(a);
		for (int i = 0; i < 2; i++) {
			if (s[i] != s[4 - i])
				flag = false;
		}
		if (flag)
			cnt++;
		flag = true;
	}
	cout << cnt << endl;
}
