/**
 * @file D_Difference.cpp
 * @brief A simple C++ program that demonstrates basic data types, operators and their usage.
 * @author failsafe
 * @date 2025-05-11
 * @version 1.0
 */

 #include <iostream>
 using ll = long long;

 int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    std::cout << "Difference = " << ((ll)a * b) - ((ll)c * d) << std::endl;
    return 0;
 }