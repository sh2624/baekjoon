// [브론즈 2] 32370 - Rook

#include <stdio.h>

int main(void)
{
    int a, b, x, y;

    // Pawn A의 위치(a, b), Pawn B의 위치(x, y) 입력
    scanf("%d %d", &a, &b);
    scanf("%d %d", &x, &y);

    // A가 (0, b)일 경우
    if (a == 0)
    {
        // B가 (0, y)이면서 y < b라면 3번, 아니면 1번
        if (x == 0 && y < b)
            printf("3");
        else
            printf("1");
    }
    // A가 (a, 0)일 경우
    else if (b == 0)
    {
        // B가 (x, 0)이면서 x < a라면 3번, 아니면 1번
        if (y == 0 && x < a)
            printf("3");
        else
            printf("1");
    }
    // A가 (a, b)일 경우 어떤 경우든 2번
    else
        printf("2");

    return 0;
}
