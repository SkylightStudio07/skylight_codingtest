#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    answer = num_list;
    
    int idx = num_list.size();
    
    int fin = num_list[idx-1];
    int prevfin = num_list[idx-2];
    
    if(fin > prevfin) {
        answer.push_back(fin - prevfin);
    }
    else if(fin <= prevfin) {
        answer.push_back(fin * 2);
    }
    
    return answer;
}