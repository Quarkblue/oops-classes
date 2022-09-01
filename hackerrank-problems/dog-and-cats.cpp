#include<stack>
#include<iostream>
#include<algorithm>
using namespace std;

string solve(string s) {
    int d = 0, c = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'c') c++;
        else if (s[i] == 'd') d++;
    }
    if (d > c) return "dogs";
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'd' && (s[i - 1] == 'c' || s[i + 1] == 'c')) {
            c--;
        }
    }
    if (d > c) return "dogs";
    else if (c > d)return "cats";
    return "tie";
}

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        cout << solve(s) << endl;
    }
}