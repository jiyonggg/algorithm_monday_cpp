#include <iostream>

int main() {
    int n;
    std::string s, result = "";
    const std::string buttons[] = {
        "1.,?!", "2ABC", "3DEF",
        "4GHI", "5JKL", "6MNO",
        "7PQRS", "8TUV", "9WXYZ"
    };

    std::cin >> n >> s;
    int idx = 0, target = s[0] - '1';

    for (int i = 1, button; i < n; i++) {
        button = s[i] - '1';
        if (button == target) {
            idx = (idx + 1) % buttons[target].length();
        } 
        else {
            result += buttons[target][idx];
            target = s[i] - '1';
            idx = 0;
        }
    }

    result += buttons[target][idx];
    
    std::cout << result;
    return 0;
}