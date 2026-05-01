#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    
    // ineq -> <, >
    // eq = n, m
    
    if(eq == "!") {
        if(ineq == "<") {
            if(n < m) {
                answer = 1;
            }
            else {
                answer = 0;
            }
        }
        else if(ineq == ">") {
            if(n > m) {
                answer = 1;
            }
            else {
                answer = 0;
            }
        }
    } 
    else if(eq == "=") {
        if(ineq == "<") {
            if(n <= m) {
                answer = 1;
            }
            else {
                answer = 0;
            }
        }
        else if(ineq == ">") {
            if(n >= m) {
                answer = 1;
            }
            else {
                answer = 0;
            }
        }
    }
    
    return answer;
}