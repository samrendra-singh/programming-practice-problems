/**
 * @file A_Say_Hello_With_C.cpp
 * @brief A simple C++ program that prints "Hello, World!" to the console.
 * @author failssafe
 * @date 2023-10-01
 * @version 1.0
 */

 #include <iostream>
 #include <string>

 int main() {
    std::string name;
    std::cin >> name;

    std::cout << "Hello, " << name <<std::endl;
    return 0;
 }