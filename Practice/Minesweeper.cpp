//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int h, w;
	cin >> h >> w;
	string b[h];

	rep(y, 0, h) cin >> b[y];

	rep(y, 0, h)rep(x, 0, w) if(int cnt = 0; b[y][x] == '.') {
		rep(k, -1, 2)rep(l, -1, 2) {
			if (k == 0 && l == 0) continue;
			int yk = y + k, xl = x + l;
			if (yk >= 0 && yk < h && xl >= 0 && xl < w) {
				if(b[yk][xl] == '#') cnt++;
			}
		}
		b[y][x] = (char)cnt + '0';
	}

	rep (y, 0, h) cout << b[y] << endl;
}

//int main() {
//	int h, w;
//	cin >> h >> w;
//	vector<vector<char> > vv(h + 2, vector<char>(w + 2));
//
//	//input
//	for (int i = 0; i < h + 2; i++) {
//		for (int j = 0; j < w + 2; j++) {
//			if (i == 0 || i == h + 1 || j == 0 || j == w + 1)
//				vv[i][j] = 'x';
//			else
//				cin >> vv.at(i).at(j);
//		}
//	}
//
//	//count bomb
//	for (int i = 0; i < h + 1; i++) {
//		for (int j = 0; j < w + 1; j++) {
//				if (int cnt = 0; vv.at(i).at(j) == '.') {
//					for (int k = -1; k < 2; k++) {
//						for (int l = -1; l < 2; l++) {
//							if (vv.at(i + k).at(j + l) == '#')
//								cnt++;
//						}
//					}
//					vv.at(i).at(j) = cnt + '0';
//				}
//		}
//	}
//
//	//output
//	for (int i = 1; i < h + 1; i++) {
//		for (int j = 1; j < w + 1; j++) {
//			cout << vv.at(i).at(j);
//		}
//		cout << endl;
//	}
//}
