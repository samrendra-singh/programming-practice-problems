/**
 * @file A_Catch_the_Coin.cpp
 * @author failsafe
 * @brief TLE Eliminator Level 1 - Week 1
 * @version 1.0
 */

 #include <iostream>
 using namespace std;

 int main() {
    int n;
    cin >> n;
    while(n--) {
        int x, y;
        cin >> x >> y;
        if(y < -1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
 }