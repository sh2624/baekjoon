// [실버 5] 10815 - 숫자 카드

#include <stdio.h>
#include <stdlib.h>

// 퀵정렬 함수
int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

// 이진탐색 함수
int binarySearch(int arr[], int size, int key)
{
    int left = 0, right = size - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
            return 1;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0;
}

int main(void)
{
    int n, m;
    int *card;

    // 카드 정보 입력 (동적 할당)
    scanf("%d", &n);
    card = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &card[i]);

    // 카드 정렬
    qsort(card, n, sizeof(int), compare);

    // 정수 정보 입력하면서 해당 값이 카드에 있는지 검사 후 결과 출력
    scanf("%d", &m);
    int num;
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &num);
        printf("%d ", binarySearch(card, n, num));
    }

    // 메모리 해제
    free(card);
    return 0;
}