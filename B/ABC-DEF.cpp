//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <stdio.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

/*
 * a*b*c % mod => (a%mod * b%mod * c%mod) % modに置き換え可能(オーバーフロー対策)
 * ((a*b*c) - (d*e*f)) % modの場合、引き算の結果が負にならないように考慮しつつ、
 * ((a%mod * b%mod * c%mod) - (d%mod * e%mod * f%mod) + mod) % mod
 * に置き換えて計算する。
 */

int main() {
	long long a, b, c, d, e, f;
	cin>>a>>b>>c>>d>>e>>f;

	int mod = 998244353;
	int A = ((((a%mod) * (b%mod)) % mod) * (c%mod))%mod;
	int B = ((((d%mod) * (e%mod)) % mod) * (f%mod))%mod;
	cout << (A-B+mod)%mod << endl;
	return 0;
}
