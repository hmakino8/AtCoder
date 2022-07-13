//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int ai, aj;

	cin >> ai >> aj;

	rep(i, 2)rep(j, 2) {
		int ret;
		cin >> ret;
		if (i == ai - 1 && j == aj - 1) {
			cout << ret;
			return 0 ;
		}
	}
}
