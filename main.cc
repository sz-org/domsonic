#include <iostream>
#include <string>
using namespace std;

int main() {
  int a;
  if (cin >> a) {
    if (a % 2 == 0) cout << a/2 << endl;
    else cout << a << endl;
  }
  return 0;
}
