#include <iostream>

int main() {
    int n;
    int bridges;
    unsigned long long result = 1; // 세번째 테스트 케이스는 int 범위를 초과함

    std::cin >> n;

    // 곱의 법칙
    for (int i = 0; i < n; i++) {
        std::cin >> bridges;
        result *= bridges;
    }

    std::cout << result;
    return 0;
}