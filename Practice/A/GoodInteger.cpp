#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int N;
  string s;

  cin >> N;
  s = to_string(N);

  if (s[0] == s[1] && s[1] == s[2] ||
      s[1] == s[2] && s[2] == s[3]) {
      cout << "Yes";
  }
  else
    cout << "No";
}
