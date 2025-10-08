// [실버 5] 14916 - 거스름돈

#include <stdio.h>
#include <limits.h>

// 최소 동전 개수 계산 함수 (DP)
int dpCoinChange(int coins[], int k, int n)
{
    int c[n + 1];

    // 초기화
    for (int i = 1; i <= n; i++)
        c[i] = INT_MAX;
    c[0] = 0;

    // j = 목표 금액
    for (int j = 1; j <= n; j++)
    {
        // i = 동전 종류의 인덱스
        for (int i = 0; i < k; i++)
        {
            int coin_value = coins[i]; // 현재 동전의 가치 (d_i)

            if (coin_value <= j)
            {
                if (c[j - coin_value] != INT_MAX)
                {
                    if (c[j - coin_value] + 1 < c[j])
                        c[j] = c[j - coin_value] + 1;
                }
            }
        }
    }

    return c[n];
}

int main(void)
{
    // coins: 사용 가능한 동전 종류, k: 동전 종류의 개수
    int coins[] = {2, 5}, k = sizeof(coins) / sizeof(coins[0]);

    // 거스름돈 액수 입력
    int n;
    scanf("%d", &n);

    // 최소 동전 개수 계산
    int result = dpCoinChange(coins, k, n);

    // 거슬러줄 수 없으면 -1 출력
    if (result == INT_MAX)
        printf("-1");
    else
        printf("%d", result); // 최소 동전 개수 출력

    return 0;
}