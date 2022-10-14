//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <stdio.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	char a, b;
	cin >> a >> b;

	if ((a == 'H' && b == 'H') || (a == 'D' && b == 'D')) {
		cout << 'H' << endl;
	}
	if (a == 'H' && b == 'D') cout << 'D' << endl;
	if (a == 'D' && b == 'H') cout << 'D' << endl;
}
