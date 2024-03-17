#include <iostream>
using namespace std;

int main() {
  int n;
  int x = 0;
  char c;
  cin >> n;

  for(int i=0; i<n; i++) {
    cin >> c;
    x += c-48;
  }
  cout << x;
}