// [실버 4] 11047 - 동전 0

#include <stdio.h>
#include <stdlib.h>

// 퀵정렬 함수
int compare(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

int main(void)
{
    // 동전 종류, 가치의 합 입력
    int n, k;
    scanf("%d %d", &n, &k);

    // 각 동전의 가치 입력
    int coin[10];
    for (int i = 0; i < n; i++)
        scanf("%d", &coin[i]);

    // 퀵정렬 (내림차순)
    qsort(coin, n, sizeof(int), compare);

    // 가치가 큰 동전부터 개수 계산
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (k >= coin[i]) // 남은 금액이 현재 동전 가치보다 크거나 같으면
        {
            cnt += k / coin[i]; // 최대한 사용
            k %= coin[i];       // 남은 금액 갱신
        }
        if (k == 0) // 남은 금액이 0이 되면 종료
            break;
    }

    printf("%d", cnt);

    return 0;
}