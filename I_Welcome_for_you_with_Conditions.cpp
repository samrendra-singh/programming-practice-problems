/**
 * @file I_Welcome_for_you_with_Conditions.cpp
 * @brief Codeforces Problem
 * @author failsafe
 * @date 2025-08-07
 */

 #include <iostream>

 int main() {
    double a, b;
    std::cin >> a >> b;
    if(a >= b) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
    return 0; 
 }