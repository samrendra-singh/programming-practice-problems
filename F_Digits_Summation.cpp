/**
 * @file F_Digits_Summation.cpp
 * @brief Codeforces Problem - Given two numbers N and M. Print the summation of their last digits.
            Input - Only one line containing two numbers N, M (0 ≤ N, M ≤ 10^18).
            Output - Print the answer of the problem.
 * @author failsafe
 * @date 2025-07-08
 * @version 1.0
 */

 #include <iostream>
 using ll = long long;

 int main() {
    ll N, M;
    std::cin >> N >> M;
    std::cout << (N % 10 + M % 10) << std::endl;
    return 0;
 }
