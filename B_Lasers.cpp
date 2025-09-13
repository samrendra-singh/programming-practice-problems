/**
 * @file B_Lasers.cpp
 * @author failsafe
 * @brief Codeforces Round 1050 DIV. 4 Problem B
 * @version 1.0
 * @date 2025-09-13
 */

 #include <iostream>
 #include <vector>
 int main() {
    int t;
    std::cin >> t;
    while(t) {
        int n = 0, m = 0, x = 0, y = 0;
        std::cin >> n >> m >> x >> y;
        std::vector<int> a(n), b(m);
        for(int i = 0; i < n; i++) std::cin >> a[i];
        for(int j = 0; j < m; j++) std::cin >> b[j];
        std::cout << n + m << std::endl;
        t--;
    }
 }