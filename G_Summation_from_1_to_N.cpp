/**
 * @file G_Summation_from_1_to_N.cpp
 * @brief codeforces Problem - Given a number N. Print the summation of numbers that is between 1 and N (inclusive).
 * Input - Only one line containing a number N (1 ≤ N ≤ 10^9).
 * Output - Print the Summation of numbers between 1 and N (inclusive).
 * @author failsafe
 * @date 2025-07-19
 * @version 1.0
 */

 #include <iostream>
 using ll = long long;

 int main() {
    int N;
    ll sum = 0;
    std::cin >> N;
    sum = static_cast<ll>(N) * (N + 1) / 2; // Using the formula for the sum of the first N natural numbers
    std::cout << sum << std::endl;
    return 0;
 }
    