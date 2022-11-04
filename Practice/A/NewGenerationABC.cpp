//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <stdio.h>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int n;
	cin>>n;

	if (1 <= n && n <= 125) cout << 4 << endl;
	if (126 <= n && n <= 211) cout << 6 << endl;
	if (212 <= n && n <= 214) cout << 8 << endl;
	return 0;
}
