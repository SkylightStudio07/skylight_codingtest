#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string a;
    string b;
    
    for(int i = 0; i < num_list.size(); i++) {
        if(num_list[i] % 2 == 1) {
            a += to_string(num_list[i]);
        }
        else if(num_list[i] % 2 == 0) {
            b += to_string(num_list[i]);
        }
    }
    
    answer = stoi(a) + stoi(b);
    
    return answer;
}