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

int main() {
	int k,a,b;
	cin>>k>>a>>b;

	if (a <= (b/k)*k) cout << "OK" << endl;
	else cout << "NG" << endl;
	return 0;
}

//int main()
//{
//	int k, a, b;
//	cin >> k >> a >> b;
//
//	int i = 1;
//	while (1)
//	{
//		int mul = k * i++;
//
//		if (mul > b)
//			break;
//		if (mul >= a)
//		{
//			cout << "OK" << endl;
//		}
//	}
//
//	cout << "NG" << endl;
//	return 0;
//}
