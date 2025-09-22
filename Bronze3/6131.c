// [브론즈 3] 6131 - 완전 제곱수

#include <stdio.h>

int main(void)
{
    int N, cnt = 0;

    // N 입력
    scanf("%d", &N);

    // 입력 범위 내에서 해당 조건을 만족하는 경우의 수 찾기
    for (int i = 1; i <= 500; i++)
    {
        for (int j = 1; j <= 500; j++)
        {
            if (i * i == j * j + N)
                cnt++;
        }
    }

    // 순서쌍의 개수 출력
    printf("%d", cnt);

    return 0;
}