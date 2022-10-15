#include <iostream>

int main() {
    int n;
    std::string s;
    int result = 0;

    std::cin >> n >> s;

    for (int i = 0; i < n; i++) {
        std::string name;
        std::cin >> name;

        // std::string의 find 메소드는 일치하는 문자열이 없을시 std::string::npos를 반환함
        if (name.find(s) != std::string::npos) result++;
    }

    std::cout << result;

    return 0;
}