#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* str1, const char* str2) {

    
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    // 마지막 인덱스 대비용으로 하나 더 건져온다
    char* answer = (char*)malloc(2 * strlen(str1) + 1);
    
    // 짝수, 홀수 for문에서 처리하는 식으로 생각하면 편하다.
    for(int i = 0; i < strlen(str1); i++)
    {
        answer[i * 2] = str1[i];
        answer[i * 2 + 1] = str2[i];
    }
    
    // 쓰레기값 제거
    answer[2 * strlen(str1)] = '\0';
    
    return answer;
}