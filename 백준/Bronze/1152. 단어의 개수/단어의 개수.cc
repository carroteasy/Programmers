#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int x = 1;

    getline(cin, s);

    if (s.size() == 1 && s[0] == ' ') {
        cout << 0;
        return 0;
    }

    for (int i = 1; i < s.size()-1; i++) {
        if (s[i] == ' ') {
            x++;
        }
    }
    cout << x;

}
