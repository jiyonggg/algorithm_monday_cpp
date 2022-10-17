#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        std::vector<int> v_arr;
        int sum = 0;
        float avg;
        int cnt = 0;
        
        std::cin >> n;
        for (int j = 0; j < n; j++) {
            int v;
            std::cin >> v;
            sum += v;
            v_arr.push_back(v);
        }

        avg = sum / (float) n;

        for (auto const &v: v_arr) {
            if (v >= avg) cnt++; 
        }

        std::cout << cnt << "/" << n << "\n";
    }
    return 0;
}