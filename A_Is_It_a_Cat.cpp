/**
 * @file A_Is_It_a_Cat.cpp
 * @author failsafe
 * @brief TLE Eliminator Level 1 - Week 1
 * @version 1.0
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;


void solve() {
    int n;
    cin >> n;

    string s;
    cin.ignore();
    cin >> s;

    string lower_s = "";
    //converting to lower case
    for(auto ch : s) {
        lower_s += tolower(ch);
    }


    string short_s = "";
    //shortning the string
    if(!lower_s.empty()) {
        short_s += lower_s[0];
        for(int i = 1; i < lower_s.size(); i++) {
            if(lower_s[i] != short_s.back()) {
                short_s += lower_s[i];
            }
        }
    }

    if(short_s == "meow") cout << "YES" << endl;
    else cout << "NO" << endl;
 }

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}