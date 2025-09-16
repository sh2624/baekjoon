// [브론즈 2] 7789 - 텔레프라임

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 소수인지 검사하는 함수
int isPrime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main(void)
{
    // 기존 번호, 추가되는 번호 입력
    char number[7], i[2], combined[10];
    scanf("%s %s", number, i);

    // combined = 새로운 번호
    strcpy(combined, i);
    strcat(combined, number);

    // 기존 번호와 새로운 번호가 모두 소수인지 여부 검사 후 출력
    if (isPrime(atoi(number)) && isPrime(atoi(combined)))
        printf("Yes");
    else
        printf("No");

    return 0;
}