//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cstring>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int a, b;
	char op;

	cin >> a >> op >> b;

	if(op == '+')
		cout << a + b << endl;
	else
		cout << a - b << endl;
}
