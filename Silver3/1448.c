// [실버 3] 1448 - 삼각형 만들기

#include <stdio.h>
#include <stdlib.h>

// 퀵정렬 함수
int compare(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a); // 내림차순 정렬
}

int main(void)
{
    // 빨대 개수, 길이 입력
    int n, straw[10000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &straw[i]);

    // 퀵정렬
    qsort(straw, n, sizeof(int), compare);

    // 삼각형 조건 만족 여부 검사 (내림차순 정렬이므로 한 케이스가 안 되면 그 뒤도 안 됨)
    for (int i = 0; i < n - 2; i++)
    {
        if (straw[i] < straw[i + 1] + straw[i + 2])
        {
            printf("%d", straw[i] + straw[i + 1] + straw[i + 2]); // 만족할 시 최댓값 출력
            return 0;
        }
    }
    printf("-1"); // 만족할 조합이 없을 시
    return 0;
}