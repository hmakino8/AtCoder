//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cstring>
#include <math.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int k;

	cin >> k;
	if (k >= 60) {
		if (k % 60 >= 10)
			cout << "22:" << k%60;
		else
			cout << "22:0" << k%60;
	}
	else {
		if (k >= 10)
			cout << "21:" << k;
		else
			cout << "21:0" << k;
	}
}
