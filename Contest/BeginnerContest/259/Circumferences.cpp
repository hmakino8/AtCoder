//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cstring>
#include <math.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

double distance(double a[2], double b[2]) {
	double a0b0 = abs(a[0] - b[0]);
	double a1b1 = abs(a[1] - b[1]);

	return sqrt(a0b0 * a1b1 + a1b1 * a1b1);
}

int main() {
	int n;

	cin >> n;
	float a[2], b[2], c[n][3], tmp[2], stock[2];

	cin >> a[0] >> a[1] >> b[0] >> b[1];

	rep(i, 0, n)rep(j, 0, 3) cin >> c[i][j];

	/*
	 * 座標a(a[0], a[1]), 座標b(b[0], b[1])がどの円周上にあるか
	 * 座標a, bと円ciの中心(c[i][0], c[i][1])との距離が、円ciの半径(c[i][2])と等しいか
	 */
	float ca[2], cb[2];
	rep(i, 0, n) {
		if (distance(a, c[i]) == c[i][2]) {
			ca[0] = c[i][0];
			ca[1] = c[i][1];
			stock[0] = i;
		}
		else if (distance(b, c[i]) == c[i][2]) {
			cb[0] = c[i][0];
			cb[1] = c[i][1];
			stock[1] = i;
		}
	}

	/*
	 * 座標a, bが存在する円ca, cbの中心の距離cacbを求める
	 */
	double cacb = distance(ca, cb);

	/*
	 * 円ca, cbは重なっていたら"Yes"
	 */
	if (cacb <= ca[1] + cb[1]) {
		cout << "Yes" << endl;
		return 0;
	}

	/*
	 * 円caかつ円cbと重なる円ciを探す。
	 * 円ciが存在したら"Yes"
	 * 存在しなければ円cbの中心に最も近く、円caと重なる円ciを探す。
	 * 円ciが存在したら、円caを円ciに切り替える。
	 * 円ciが存在しなければ"No"
	 */
	rep(i ,0 ,n) { if (i == stock[0] or i == stock[1]) continue;
		double d = distance(ca, c[i]);

		if (d <= ca[2] + c[i][2]) {
			if (distance(c[i], cb) <= c[i][2] + cb[2]) {
				cout << "Yes" << endl;
				return 0;
			}
			rep(i ,0 ,n) { if (i == stock[0] or i == stock[1]) continue;
				tmp[0] = c[i][0];
				tmp[1] = c[i][1];
				if (distance(tmp, b) < d) {
					a[0] = tmp[0];
					a[1] = tmp[1];
					i = 0;
				}
			}
		}
	}
	cout << "No" << endl;
}
