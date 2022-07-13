//#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <cstring>
#include <math.h>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int n, x, d=0, m=0;
	string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	cin >> n >> x;
	d = x/n;
	if (x%n)
		cout << s[d] << endl;
	else
		cout << s[d-1] << endl;
}
