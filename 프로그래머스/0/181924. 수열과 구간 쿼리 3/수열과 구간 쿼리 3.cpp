#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    answer = arr;
    
    for(int i = 0; i < queries.size(); i++) {
        int temp1 = 0;
        int temp2 = 0;
        
        temp1 = answer[queries[i][0]];
        temp2 = answer[queries[i][1]];
        
        answer[queries[i][1]] = temp1;
        answer[queries[i][0]] = temp2;
        
    }
    
    return answer;

}