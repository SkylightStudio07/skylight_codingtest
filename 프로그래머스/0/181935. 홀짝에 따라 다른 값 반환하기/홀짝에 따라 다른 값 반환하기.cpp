#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    // 짝수
    if(n % 2 == 0) {
        // 2에서부터 시작해 n까지
        for(int i = 2; i <= n; i+=2) {
            answer += i * i;
        }
    }
    
    // 홀수
    else if(n % 2 == 1) {
        // 1에서부터 시작해 n까지,
        for(int i = 1; i <= n; i+=2) {
            answer += i;
        }
    }
    
    return answer;
}