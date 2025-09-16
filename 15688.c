// [실버 5] 15688 - 수 정렬하기 5

#include <stdio.h>
#include <stdlib.h>

// 퀵정렬 함수
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b); // 오름차순 정렬
}

int main(void)
{
    int n, num[1000000];

    // 숫자 개수, 숫자 입력
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    // 퀵정렬
    qsort(num, n, sizeof(int), compare);

    // 정렬 결과 출력
    for (int i = 0; i < n; i++)
        printf("%d \n", num[i]);

    return 0;
}