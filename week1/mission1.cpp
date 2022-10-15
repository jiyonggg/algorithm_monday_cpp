#include <iostream>

int main() {
    int n;
    int bridges;
    // unsigned long long: 양수 최대값이 가장 큰 자료형 (2^64 즉 부호 없는 64비트 정수 자료형)
    unsigned long long result = 1; // int일 경우 세번째 테스트 케이스가 int 범위를 초과해서 overflow 발생함

    std::cin >> n;

    // 곱의 법칙
    for (int i = 0; i < n; i++) {
        std::cin >> bridges;
        result *= bridges;
    }

    std::cout << result;
    return 0;
}