// [INU 코드페스티벌 2025 C번] - 특수한 정수 쌍

/*
AxB의 약수가 2개라는 건 소수라는 뜻이기 때문에,
항상 (1x소수) 형태의 순서쌍 1개밖에 나올 수 없음
B-A = N인데 A가 항상 1이므로 B = N+1 / 얘가 소수인지만 검사하면 됨
*/

#include <stdio.h>

// 소수 검사 함수
int isPrime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main(void)
{
    // 테스트 케이스, 정수 입력
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);

        // (n+1)이 소수라면 해당 순서쌍(1개) 출력
        if (isPrime(n + 1))
        {
            printf("1 \n");
            printf("1 %d \n", n + 1);
        }
        // 아니라면 0 출력
        else
            printf("0 \n");
    }

    return 0;
}