//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cstring>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	string s;

	cin >> s;

	if (s.at(s.size() - 1) == 'T')
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
