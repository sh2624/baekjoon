// [브론즈 1] 6996 - 애너그램
#include <stdio.h>
#include <string.h>

/*
[풀이법]
알파벳 배열 쫘라락 0으로 만들어놓고
첫 번째 문자열의 각 문자는 +1 해주고
두 번째 문자열의 각 문자는 -1 해줌
애너그램이라면 똑같으니까 알파벳 배열이 여전히 0이겠징
*/

// 애너그램인지 검사하는 함수
int isAnagram(char *x, char *y)
{
    char alphabet[26] = {0};

    // 우선 문자열 길이가 다르면 애너그램 아님
    if (strlen(x) != strlen(y))
        return 0;

    // 각 문자열의 문자 증가/감소
    for (int i = 0; i < strlen(x); i++)
    {
        alphabet[x[i] - 'a']++;
        alphabet[y[i] - 'a']--;
    }

    // 알파벳 배열 돌면서 0이 아닌 게 있으면 애너그램 아님
    for (int j = 0; j < 26; j++)
    {
        if (alphabet[j] != 0)
            return 0;
    }
    return 1; // 다 0이면 애너그램
}

int main(void)
{
    int n;
    char a[100], b[100];

    // 개수, 문자열 입력
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", a, b);

        // 애너그램 여부 출력
        if (isAnagram(a, b))
            printf("%s & %s are anagrams. \n", a, b);
        else
            printf("%s & %s are NOT anagrams. \n", a, b);
    }

    return 0;
}