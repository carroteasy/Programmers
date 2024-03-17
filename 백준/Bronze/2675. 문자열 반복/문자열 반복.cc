#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  int re;

  string s;

  cin >> n;

  for(int i=0; i<n; i++) {
    cin >> re >> s;
    for(int x=0; x<s.size(); x++) {
      for(int j=0; j<re; j++) {
        cout << s[x];
      }
    }
    cout << '\n';
  }
  
}