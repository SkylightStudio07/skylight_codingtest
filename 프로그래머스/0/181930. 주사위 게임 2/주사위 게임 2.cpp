#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    
    int temp = 0;
    int temp2 = 0;
    int temp3 = 0;
    
    if( a != b && a != c && b != c) {
        temp = a + b + c;
        return temp;
    }
    if( a == b) {
        if( b != c) {
            temp2 = ( a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2));
            return temp2;
        }
        else if(b == c) {
            temp3 = ( a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2)) * (pow(a, 3) + pow(b, 3) + pow(c, 3));
            return temp3;
        }
    }
    if(b == c) {
        if( a != c) {
            temp2 = ( a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2));
            return temp2;
        }
    }
    if( a == c) {
        if( b != c) {
            temp2 = ( a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2));
            return temp2;
        }
    }
    
    return answer;
}