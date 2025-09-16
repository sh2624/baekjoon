// [브론즈 2] 1681 - 줄 세우기

#include <stdio.h>

// 숫자에 L이 있는지 검사하는 함수
int isValid(int num, int L)
{
    while (num > 0)
    {
        // L이 있으면 1 반환
        if (num % 10 == L)
            return 1;
        num /= 10;
    }
    // L이 없으면 0 반환
    return 0;
}

int main(void)
{
    int N, L, num = 1;

    // N, L 입력
    scanf("%d %d", &N, &L);

    // num은 계속 증가
    for (int cnt = 0; cnt < N; num++)
    {
        // L이 없으면 카운트 증가
        if (!isValid(num, L))
        {
            cnt++;
            if (cnt == N) // N번째에 종료
                break;
        }
    }

    // 결과 출력
    printf("%d", num);

    return 0;
}