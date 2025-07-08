/**
 * @file E_Area_of_a_Circle.cpp
 * @brief A simple C++ program that calculates the area of a circle given its radius.
 * @author failsafe
 * @date 2025-05-11
 * @version 1.0
 */

 #include <iostream>
 #include <iomanip>
 const double PI = 3.141592653;

 int main() {
    double radius;
    std::cin >> radius;
    std::cout << std::fixed << std::setprecision(9);
    double area = PI * radius *radius;
    std::cout << area << std::endl; 
    return 0;
 }