#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    
    string st_a = to_string(a);
    string st_b = to_string(b);
    
    int temp_1 = stoi(st_a + st_b);
    int temp_2 = 2 * a * b;
    
    
    int answer = temp_1 >= temp_2 ? temp_1 : temp_2;
    return answer;
}