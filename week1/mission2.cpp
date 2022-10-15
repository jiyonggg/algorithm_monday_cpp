#include <iostream>

int main() {
    int n;
    std::string s;
    int result = 0;

    std::cin >> n >> s;

    for (int i = 0; i < n; i++) {
        std::string name;
        std::cin >> name;

        if (name.find(s) != std::string::npos) result++;
    }

    std::cout << result;

    return 0;
}