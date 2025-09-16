// [실버 5] 16435 - 스네이크버드

#include <stdio.h>

int main(void) {   
    int N, L, h[10001], tmp;

    // 과일 개수, 초기 길이, 각 과일별 높이 입력
    scanf("%d %d", &N, &L);
    for (int i = 0; i < N; i++)
        scanf("%d", &h[i]);

    // 과일 높이 오름차순 정렬 (버블 정렬)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (h[j] > h[j + 1]) {
                tmp = h[j];
                h[j] = h[j + 1];
                h[j + 1] = tmp; 
            }
        }
    }

    // 차례대로 L과 비교
    for (int i = 0; i < N; i++) {
        if (h[i] <= L)
            L++;
    }

    // 결과 출력
    printf("%d", L);

    return 0;
}