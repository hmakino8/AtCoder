//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	string s;
	cin >> s;
	int total = 0;
	rep(i, 10) total += i;
	rep(i, 9) {
		total -= s[i] - '0';
	}
	cout << total << endl;
}
