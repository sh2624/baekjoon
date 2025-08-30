// [실버 4] 2839 - 설탕 배달

#include <stdio.h>

int main(void) {
    // 수 입력
    int n, cnt = 0;
    scanf("%d", &n);

    while (1) {
        // n이 5의 배수면 그만큼 빼기
        if (n % 5 == 0) {
            cnt += n / 5;
            break;
        }

        // 3씩 빼기
        n -= 3;
        cnt++;

        if (n <= 0) break;
    }

    // 결과 출력
    if (n < 0) printf("-1");
    else printf("%d", cnt);

    return 0;
}