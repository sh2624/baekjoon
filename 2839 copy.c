// [실버 5] 2751 - 수 정렬하기 2

#include <stdio.h>
#include <stdlib.h>

// 퀵정렬 (오름차순 정렬)
int compare(const void *num1, const void *num2)
{
    if (*(int *)num1 > *(int *)num2)
        return 1;
    else if (*(int *)num1 < *(int *)num2)
        return -1;
    else
        return 0;
}

int main(void)
{
    // 개수 입력
    int n;
    scanf("%d", &n);

    // 배열 동적 할당 후 입력
    int *num = (int *)malloc(sizeof(int) * n);
    if (num == NULL)
    {
        printf("메모리 할당 실패\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    // 퀵정렬
    qsort(num, n, sizeof(int), compare);

    // 결과 출력
    for (int i = 0; i < n; i++)
        printf("%d \n", num[i]);

    printf("\n\n");
    system("pause");
    return 0;
}