// 구현이 아닌 연산으로 풀이

#include <iostream>

int main() {
    int n, k;
    int cnt = 0;
    int dxs[] = {0, 0, 1, -1, 0};
    int dys[] = {1, -1, 0, 0, 0};

    std::cin >> n >> k;

    for (int i = 0; i < k; i++) {
        int a, b;
        std::cin >> a >> b;
        a -= 1;
        b -= 1;

        for (int j = 0; j < 5; j++) {
            int x = a + dxs[j];
            int y = b + dys[j];

            if (x >= 0 && x < n && y >= 0 && y < n) {
                cnt++;
            }
        }
    }
    
    std::cout << cnt;
    return 0;
}