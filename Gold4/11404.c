// [골드 4] 11404 - 플로이드
// 알고리즘 시간에 배운 플로이드 알고리즘을 활용

#include <stdio.h>
#define INF 99999999

int arr[105][105];

int main(void)
{
    int n, m, a, b, c;

    // 도시 개수, 버스 개수 입력
    scanf("%d", &n);
    scanf("%d", &m);

    // 초기에는 모두 무한대 거리
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            arr[i][j] = INF;

    // i에서 i로 가는 거리는 0
    for (int i = 1; i <= n; i++)
        arr[i][i] = 0;

    // 버스 정보 입력
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d %d", &a, &b, &c); // 시작 도시, 도착 도시, 이동 비용

        // 중복 입력될 경우 처리
        if (arr[a][b] > c)
            arr[a][b] = c;
    }

    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (arr[i][j] > arr[i][k] + arr[k][j])
                    arr[i][j] = arr[i][k] + arr[k][j]; // k를 경유해서 가는 게 더 작다면 값 업데이트

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            if (arr[i][j] == INF) // 갈 수 없는 경우에는 0 처리
                printf("0 ");
            else
                printf("%d ", arr[i][j]); // 갈 수 있다면 해당 값 출력
        printf("\n");
    }

    return 0;
}