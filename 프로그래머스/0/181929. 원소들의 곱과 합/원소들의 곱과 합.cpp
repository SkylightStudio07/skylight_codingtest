#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int powsum = 0;
    int mul = 1;
    
    for(int i = 0; i < num_list.size(); i++) {
        powsum += num_list[i];
        mul *= num_list[i];
    }
    
    answer = (mul < pow(powsum, 2)) ? 1 : 0;
    
    return answer;
}