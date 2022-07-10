//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, K, ret = 0;
	cin >> N >> K;

	for (int i = 0, v = 0; i < N; i++) {
		cin >> v;
		ret += min(v, K - v) * 2;
	}
	cout << ret << endl;
}

//int main() {
//	int N, K, ret = 0;
//	cin >> N >> K;
//	vector<int> vec(N);
//
//	for (int i = 0; i < N; i++) {
//		cin >> vec[i];
//	}
//	for (auto v: vec)
//		ret += min(v, K - v) * 2;
//	cout << ret << endl;
//}
