//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int l1, r1, l2, r2;

	cin >> l1 >> r1 >> l2 >> r2;
	if (r1 <= l2 && r2 <= l1)
		cout << 0 << endl;
	else if (l1 < l2 && l2 < r1 && r1 < r2)
		cout << r1 - l2 << endl;
	else if (l2 < l1 && l1 < r2 && r2 < r1)
		cout << r2 - l1 << endl;
	else if (l1 <= l2 && r2 <= r1)
		cout << r2 - l2 << endl;
	else if (l2 <= l1 && r1 <= r2)
		cout << r1 - l1 << endl;
	else
		cout << 0 << endl;
}
