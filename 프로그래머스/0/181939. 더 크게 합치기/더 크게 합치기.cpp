#include <string>
using namespace std;

int solution(int a, int b) {
    string sa = to_string(a);
    string sb = to_string(b);

    long long ab = stoll(sa + sb);  // 문자열 합치기는 그냥 + 로!
    long long ba = stoll(sb + sa);

    return ab >= ba ? ab : ba;
}