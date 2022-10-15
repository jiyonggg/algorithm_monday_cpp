#include <iostream>
#include <array>
#include <algorithm> // sort 함수

int main() {
    std::array <int, 4> arr;

    for (int i = 0; i < 4; i++) {
        std::cin >> arr[i];
    }

    // sort의 평균 시간 복잡도: O(n log n)
    std::sort(arr.begin(), arr.begin() + 4);
    
    int result = arr[3] + arr[2] - arr[1] - arr[0];
    std::cout << result;

    return 0;
}