// [브론즈 3] 14568 - 2017 연세대학교 프로그래밍 경시대회

#include <stdio.h>

int main(void)
{
    int n, cnt = 0;

    // 사탕 총 개수 입력
    scanf("%d", &n);

    for (int i = 0; i < n; i++) // 남규
    {
        for (int j = 0; j < n; j++) // 영훈
        {
            for (int k = 0; k < n; k++) // 택희
            {
                // 4가지 조건 검사
                if ((i + j + k == n) && (i >= j + 2) && (i > 0 && j > 0 && k > 0) && (k % 2 == 0))
                    cnt++;
            }
        }
    }

    // 경우의 수 출력
    printf("%d", cnt);

    return 0;
}