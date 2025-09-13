/**
 * @file D_Destruction_of_the_Dandelion_Fields.cpp
 * @author failsafe
 * @brief Codeforces Round 1050 DIV. 4 Problem D
 * @version 1.0
 * @date 2025-09-13
 */

 #include <iostream>
 #include <vector>
 #include <algorithm>
 #include <fstream>

 bool comp(int a, int b) {
    return a > b;
 }

 int main() {

    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());  // Redirect std::cin to read from input.txt


    int t;
    std::cin >> t;
    while(t--) {
        int n;
        int temp;
        long long even_sum = 0, odd_sum = 0;
        std::cin >> n;
        std::vector<int> arr;
        for(int i = 0; i < n; i++) {
            std::cin >> temp;
            if(temp % 2 == 1) {
                arr.push_back(temp);
            }
            else {
                even_sum += temp;
            }
        }

        std::sort(arr.begin(), arr.end(), comp);

        for(int i = 0; i < arr.size(); i += 2) {
            odd_sum += arr[i];
        }

        if(arr.size() == 0) std::cout << 0 << std::endl;
        else std::cout << odd_sum + even_sum << std::endl;
    }
 }