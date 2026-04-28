#include <iostream>
#include <string>
using namespace std;

int main() {
    // 대문자와 소문자 서로 바꾸기
    string str;

    // 방법 2 : 함수 이용

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = tolower(str[i]);
        }
        else if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = toupper(str[i]);
        }
    }

    cout << str;    

}