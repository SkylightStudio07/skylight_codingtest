#include <string>
#include <vector>
#include <climits>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(int j = 0; j < queries.size(); j++) {
        int s = queries[j][0];
        int e = queries[j][1];
        int k = queries[j][2];
        int lowest = INT_MAX;  // 아주 큰 수로 초기화
        
        for(int i = s; i <= e; i++) {
            if(arr[i] > k && arr[i] < lowest) {
                lowest = arr[i];  // k보다 크면서 더 작은 값 발견시 갱신
            }
        }
        
        answer.push_back((lowest == INT_MAX ? -1 : lowest));  // 갱신 안됐으면 -1
    }
    
    return answer;
}