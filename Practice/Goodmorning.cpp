//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (a <= c) {
		if (a == c) {
			if (b <= d) cout << "Takahashi" << endl;
			else if (b > d) cout << "Aoki" << endl;
		}
		else cout << "Takahashi" << endl;
	}
	else cout << "Aoki" << endl;
}
