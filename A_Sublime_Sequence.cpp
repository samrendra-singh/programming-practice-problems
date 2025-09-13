/**
 * @file A_Sublime_Sequence.cpp
 * @author failsafe
 * @brief Codeforces Round 1050 DIV. 4 Problem A
 * @version 1.0
 * @date 2025-09-13
 */

 #include <iostream>

 int main() {
    int t;
    std::cin >> t;
    while(t) {
        int n, x;
        std::cin >> x >> n;
        if(n % 2 == 0) std::cout << 0 << std::endl;
        else std::cout << x << std::endl;
        t--;
    }
 }