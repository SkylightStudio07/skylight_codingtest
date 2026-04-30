#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string temp = my_string;
    
    for(int i = 0; i < overwrite_string.length(); i++) {
        temp[s + i] = overwrite_string[i];
    }
    
    return temp;
}