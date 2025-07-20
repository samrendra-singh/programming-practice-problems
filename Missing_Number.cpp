/**
 * @file Missing_Number.cpp
 * @brief CSES Problem Set- You are given all numbers between 1,2,...,n except one. Your task is to find the missing number.
 * Input - The first line contains an integer n (2 ≤ n ≤ 2*10^5). The second line contains n - 1 integers, each of them is distinct and belongs to the range from 1 to n.
 * Output - Print the missing number.
 * @author failsafe
 * @date 2025-07-19
 * @version 1.0
 */

 #include <iostream>
 #include <vector>
 using ll = long long;

 int main() {
    ll n, sum = 0, expected_sum = 0, temp;
    std::cin >> n;

    for(int i = 0; i < n-1; ++i) {
        std::cin >> temp;
        sum += temp;
    }

    expected_sum = n * (n + 1) / 2;
    std::cout << expected_sum - sum << std::endl;

    return 0;
 }