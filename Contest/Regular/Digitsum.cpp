//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int n;

	cin >> n;
	rep2(i, 2, 10) {
		int cnt = 0;
		int num = 1;
		for(; num <= n; ) {
			num *= i;
			cnt++;
			if (num == n) {
				int num2 = 1;
				rrep(j, 0, cnt) {
					num2 *= j;
				}
			}
		}
		if (num == n) {
			rep(i, )
		}
		for (int j = 0; j)
	}

}
