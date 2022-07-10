//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cstring>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

int main() {
	char c;

	cin >> c;

	if(strchr("aiueo", c))
		cout << "vowel" << endl;
	else
		cout << "consonant" << endl;
}
