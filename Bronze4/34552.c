// [INU 코드페스티벌 2025 A번] - 디딤돌 장학금

#include <stdio.h>

int main(void)
{
    // 분위별 장학금 입력
    int m[11];
    for (int i = 0; i < 11; i++)
        scanf("%d", &m[i]);

    // 재학생 수 입력
    int n;
    scanf("%d", &n);

    // 분위/평점/취득 학점 입력
    int b[1001], s[1001];
    double l[1001];
    for (int i = 0; i < n; i++)
        scanf("%d %lf %d", &b[i], &l[i], &s[i]);

    // 장학금 요건 충족 여부 검사
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        if (l[i] >= 2.0 && s[i] >= 17)
            total += m[b[i]];
    }

    // 지출 총액 출력
    printf("%d", total);

    return 0;
}