// [브론즈 2] 30700 - KOREA 문자열 만들기

#include <stdio.h>
#include <string.h>

int main(void)
{
    // 문자열 입력
    char s[1001];
    scanf("%s", s);

    char korea[6] = "KOREA";
    int cnt = 0, len = strlen(s);

    // 문자열 돌면서 해당 글자가 있는지 검사
    for (int i = 0; i < strlen(s); i++)
    {
        if (korea[cnt % 5] == s[i])
            cnt++;
    }

    // 결과 출력
    printf("%d", cnt);

    return 0;
}
