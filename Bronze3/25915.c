// [브론즈 3] 25915 - 연세여 사랑한다

#include <stdio.h>
#include <math.h>

int main(void)
{
    // 알파벳 입력
    char alphabet;
    scanf("%c", &alphabet);

    // 입력값과 첫 글자인 'I' 사이의 거리(절댓값)만 구하면 나머지 거리는 항상 같음
    printf("%d", abs(73 - alphabet) + 84);

    return 0;
}