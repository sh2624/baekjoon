// [실버 5] 15904 - UCPC는 무엇의 약자일까?

#include <stdio.h>
#include <string.h>

int main(void) {
    // 문자열 입력(공백 포함)
    char sentence[1001];
    scanf("%[^\n]s", sentence);

    int isUcpc = 0, len = strlen(sentence), idx;

    // 1) 'U' 검사
    for (int i = 0; i < len; i++) {
        if (sentence[i] == 'U') {
            idx = i + 1;
            break;
        }
    }

    // 2) 'C' 검사(다음 인덱스부터)
    for (int i = idx; i < len; i++) {
        if (sentence[i] == 'C') {
            idx = i + 1;
            break;
        }
    }

    // 3) 'P' 검사(다음 인덱스부터)    
    for (int i = idx; i < len; i++) {
        if (sentence[i] == 'P') {
            idx = i + 1;
            break;
        }
    }

    // 4) 'C' 검사 (다음 인덱스부터), 찾으면 가능 여부 1로 바꿈      
    for (int i = idx; i < len; i++) {
        if (sentence[i] == 'C') {
            isUcpc = 1;
            break;
        }
    }

    // 가능 여부에 따라 결과 출력
    if (isUcpc == 1)
        printf("I love UCPC");
    else
        printf("I hate UCPC");

    return 0;
}