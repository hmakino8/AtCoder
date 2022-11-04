//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (abs(a-b) == 1 || abs(a-b) == 9) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
