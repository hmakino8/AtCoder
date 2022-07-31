//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;
using ll = long long;

int main() {
	ll a, b, k;
	cin >> a >> b >> k;
	int cnt = 0;
	while(a < b) {
		a *= k;
		cnt++;
	}
	cout << cnt << endl;
}
