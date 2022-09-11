//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int s = 1;
	rep2(i, 0, n-1) s *= 10;
	rep2(i, s, s*10) {
		int tmp = i;
		int flag = 0;
		int cnt = 0;
		rep(j, n-1) {
			int last = tmp%10;
			tmp /= 10;
			int s_to_last = tmp%10;
			if (last > s_to_last && last <= m) {
				cnt++;
				continue ;
			}
			if (j == n-2 && tmp%10 > m-n) return 0;
			flag = 1;
			break ;
		}
		if (!flag) {
			string s = to_string(i);
			rep(i, n) {
				cout << s[i];
				if (i != n-1) cout << ' ';
			}
			cout << endl;
		}
	}
}
