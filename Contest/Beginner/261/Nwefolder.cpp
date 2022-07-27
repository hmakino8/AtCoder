//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int N;
	string s;
	cin >> N;
	cin >> s;
	cout << s << endl;

	rep(i, N - 1) {
		string sn;
		cin >> sn;

		int cnt = 0;
		rep(j, s.length()) {
			if (s[j] == sn[0]) {
				for (int k = 0; s[j + k] && s[j + k] == sn[k]; k++) {
					if (!sn[k]) {
						cnt++;
						cout << cnt << endl;
						break ;
					}
				}
			}
		}
		//if (cnt == 0)
		//	cout << sn << endl;
		//else
		//	cout << sn << "(" << cnt << ")" << endl;
		s += sn;
	}
}
