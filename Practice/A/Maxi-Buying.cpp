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
	cin >> n;
	n = (int)(n * 1.08);
	if (n < 206) cout << "Yay!" << endl;
	else if (n == 206) cout << "so-so" << endl;
	else cout << ":(" << endl;
	return 0;
}
