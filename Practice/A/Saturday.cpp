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
	string s;
	cin >> s;

	if (s == "Monday") cout << 5;
	else if (s == "Tuesday") cout << 4;
	else if (s == "Wednesday") cout << 3;
	else if (s == "Thursday") cout << 2;
	else cout << 1;
	return (0);
}
