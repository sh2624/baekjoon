// [실버 5] 1475 - 방 번호

#include <stdio.h>

int main(void) {   
    // 수 입력 
    int n, cnt = 0;
    scanf("%d", &n);

    // 문제 설명이 좀 이상한데, 결국 비트 검사하면서 1 개수 카운트해주면 된다.
    while (n != 0) {
        if (n & 1) cnt++;
        n >>= 1;
    }

    // 결과 출력
    printf("%d", cnt);

    return 0;
}