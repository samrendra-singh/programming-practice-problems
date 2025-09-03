/**
 * @file H_Two_numbers.cpp
 * @brief Codeforces Problem - Given two numbers A and B, print floor, ceil and round of A/B.
 * Input - Two integers A and B (1 ≤ A, B ≤ 10^9).
 * Output - Print the sum of A and B.
 * @author failsafe 
 * @date 2025-08-07
 */

#include <iostream>
#include <cmath>

int main() {
    long double a, b;
    std::cin >> a >> b;
    //std::cout << "floor " << a << " / " << b <<  " = " << a / b << std::endl;
    std::cout << "floor " << a << " / " << b <<  " = " << floor(a / b) << std::endl;
    std::cout << "ceil " << a << " / " << b << " = " << ceil(a / b) << std::endl;
    std::cout << "round " << a << " / " << b << " = " << round(a/b) << std::endl ; 
    return 0;
}