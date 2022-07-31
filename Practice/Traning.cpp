//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cstring>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	string sa, sb;

	cin >> sa >> sb;

	if (sa.size() > sb.size())
		cout << sa << endl;
	else
		cout << sb << endl;
}
