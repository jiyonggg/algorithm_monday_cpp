#include <iostream>

int main() {
    int n;
    std::string s;
    std::cin >> n;
    std::cin >> s;

    int cnt = 1;
    char target = s[0];
    for (int i = 1; i < n; i++) {
        if (s[i] != target) {
            target = s[i];
            cnt++;
        }
    }
    std::cout << cnt;
    return 0;
}