// [�ǹ� 4] 2839 - ���� ���

#include <stdio.h>

int main(void) {
    // �� �Է�
    int n, cnt = 0;
    scanf("%d", &n);

    while (1) {
        // n�� 5�� ����� �׸�ŭ ����
        if (n % 5 == 0) {
            cnt += n / 5;
            break;
        }

        // 3�� ����
        n -= 3;
        cnt++;

        if (n <= 0) break;
    }

    // ��� ���
    if (n < 0) printf("-1");
    else printf("%d", cnt);

    return 0;
}