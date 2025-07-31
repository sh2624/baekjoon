// [실버 5] 1402 - 아무래도이문제는A번난이도인것같다

#include <stdio.h>
#include <string.h>

int main(void) {
    // 테스트 케이스 개수 입력
    int t, a, b;
    scanf("%d", &t);

    // 생각해보면 1이랑 -1 때문에 입력이 뭐든간애 yes가 나올 수 밖에 없는 구조임
    // ex) 6 = 1 * (-1) * 6이고, 1 + (-1) + 6 = 6이므로 yes
    
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        printf("yes \n");
    }

    return 0;
}