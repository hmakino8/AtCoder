//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	vector<int> n(3);
	cin >> n[0] >> n[1] >> n[2];
	sort(n.begin(), n.end());
	if (n[0] == 5 && n[1] == 5 && n[2] == 7) cout << "Yes\n";
	else cout << "No\n";
}
