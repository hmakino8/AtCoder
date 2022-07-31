//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
	int sum = 0;
	string n;

	cin >> n;

	for (int i = 0; n[i]; i++) {
		sum += n[i] - '0';
	}
	if (stoi(n) % sum)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
}
