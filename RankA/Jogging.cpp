//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	int a, b, c, d, e, f, x;
	cin >> a >> b >> c >> d >> e >> f >> x;

	int dev, mod, distA, distB;

	dev = x/(a+c);
	mod = x%(a+c);
	if (mod >= a) distA = (dev*a+a)*b;
	else distA = (dev*a+mod)*b;

	dev = x/(d+f);
	mod = x%(d+f);
	if (mod >= d) distB = (dev*d+d)*e;
	else distB = (dev*d+mod)*e;

	if (distA > distB) cout << "Takahashi" << endl;
	else if (distA < distB) cout << "Aoki" << endl;
	else cout << "Draw" << endl;
	return 0;
}
