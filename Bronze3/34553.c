// [INU 코드페스티벌 2025 B번] - 알파벳 점수 계산기

#include <stdio.h>
#include <string.h>

int main(void)
{
    // 문자열 입력
    char str[100001];
    scanf("%s", str);

    // 문자열의 첫 번째 문자는 항상 1점
    // 현재 문자가 인접한 이전 문자보다 사전 순서상 뒤에 있다면, 현재 문자의 점수는 인접한 이전 문자의 점수에 1을 더한 값
    // 그 외의 경우, 현재 문자의 점수는 1 점
    int len = strlen(str), score = 1, prev = 1;
    for (int i = 1; i < len; i++)
    {
        if ((int)str[i] > (int)str[i - 1])
            prev += 1;
        else
            prev = 1;

        score += prev;
    }

    // 점수 합계 출력
    printf("%d", score);

    return 0;
}