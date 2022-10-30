#include <iostream>

int main() {
    int n, ans = 0;
    std::cin >> n;
    for (int i = 0, score; i < n; i++) {
        std::cin >> score;
        ans += score;
    }
    std::cout << ans;
    return 0;
}