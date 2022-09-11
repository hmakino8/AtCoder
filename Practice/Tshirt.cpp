//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	float a, b, c, x;
	cin >> a >> b >> c >> x;

	if (x > b) cout << 0 << endl;
	else if (x <= a) cout << 1 << endl;
	else printf("%0.10f\n", c/(b-a));
	return 0;
}
