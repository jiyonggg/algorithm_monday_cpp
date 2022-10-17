#include <iostream>
#include <vector>
#include <cmath> // sqrt()

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n + 1);
    std::vector<bool> prime_arr(n + 1);
    int result = 0;

    for (int i = 1; i <= n; i++) {
        std::cin >> arr[i];
    }

    for (int i = 2; i <= n; i++) {
        prime_arr[i] = 1;
    }

    // 에라토스테네스의 체
    // sqrt(n)를 기준으로 대칭이므로 sqrt(n)까지만 처리하면 됨
    for (int i = 2; i <= std::sqrt(n); i++) {
        if (prime_arr[i] == 1) {
            for (int j = i * 2; j <= n; j += i) {
                prime_arr[j] = 0;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (prime_arr[i] == 1) result += arr[i];
    }

    std::cout << result;
    return 0;
}