/**
 * @file C_Simple_Calculator.cpp
 * @brief A simple C++ program that demonstrates basic data types, opertaors and their usage.
 * @author failssafe
 * @date 2023-10-01
 * @version 1.0
 */

 #include <iostream>
 using ll = long long;

 int main() {
    int x, y;
    std::cin >> x >> y;

    std::cout << x << " + " << y << " = " << (ll)x + y << std::endl;
    std::cout << x << " * " << y << " = " << (ll)x * y << std::endl;
    std::cout << x << " - " << y << " = " << (ll)x - y << std::endl;

    return 0;
 }