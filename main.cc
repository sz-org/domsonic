#include <iostream>
#include <string>
using namespace std;

int main() {
  int a;
  if (cin >> a) {
    if (a % 2 == 0) cout << a/2 << endl;
    else if (a > 0) cout << -a << endl;
    else cout << a << endl;
    return 0;
  }
  cerr << "Gimme an integer!" << endl;
  return 1;
}
