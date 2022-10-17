#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // std::pair - 2개의 항목을 같이 저장
    // std::pair에는 정렬 기준이 사전에 정의되어 있음
    typedef std::pair<std::string, float> P;
    int n, k;
    std::cin >> n >> k;
    std::vector<P> attends;

    for (int i = 0; i < n; i++) {
        std::string s;
        float h;
        std::cin >> s >> h;
        P student = std::make_pair(s, h);
        attends.push_back(student);
    }

    std::sort(attends.begin(), attends.end());
    P target = attends[k - 1];
    std::string target_s = target.first;
    float target_t = target.second;

    // 소수점 2번째 자리까지 출력
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << target_s << " " << target_t;
    return 0;
}