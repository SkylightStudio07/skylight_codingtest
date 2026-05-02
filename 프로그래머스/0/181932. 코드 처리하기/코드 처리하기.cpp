#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    string ret;
    int mode = 0;
    // 모드가 0일때 code[idx]
    
    for(int idx = 0; idx < code.length(); idx++ ) {
        if(code[idx] == '1') {
            mode = mode > 0 ? 0 : 1;
        }
        if(mode == 0) {
            if(code[idx] != '1') {
                if(idx % 2 == 0) {
                    ret += code[idx];
                }
            }
        }
        else if (mode == 1) {
            if(code[idx] != '1') {
                if(idx % 2 == 1) {
                    ret += code[idx];
                }
            }
        }
    }
    
    if(ret == "\0") {
        return "EMPTY";
    }
    
    answer = ret;
    
    return answer;
}