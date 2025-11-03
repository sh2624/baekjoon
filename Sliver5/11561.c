// [실버 5] 11651 - 좌표 정렬하기 2

#include <stdio.h>
#include <stdlib.h>

// x, y좌표를 저장할 구조체
typedef struct
{
    int x, y;
} Point;

// qsort 비교 함수
int compare(const void *a, const void *b)
{
    Point A = *(Point *)a, B = *(Point *)b;

    if (A.y > B.y) // y값에 따라 정렬
        return 1;
    else if (A.y == B.y) // y값이 같으면 x값에 따라 정렬
    {
        if (A.x > B.x)
            return 1;
        else
            return -1;
    }
    return -1;
}

int main()
{
    // 테스트케이스 입력
    int n;
    scanf("%d", &n);

    // n값에 따른 동적 배열 생성
    Point *arr;
    arr = (Point *)malloc(sizeof(Point) * n);

    // x, y좌표 입력 후 정렬
    for (int i = 0; i < n; i++)
        scanf("%d %d", &arr[i].x, &arr[i].y);
    qsort(arr, n, sizeof(Point), compare);

    // 정렬 결과 출력
    for (int i = 0; i < n; i++)
        printf("%d %d\n", arr[i].x, arr[i].y);

    free(arr);
    return 0;
}