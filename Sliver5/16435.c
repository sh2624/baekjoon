// [�ǹ� 5] 16435 - ������ũ����

#include <stdio.h>

int main(void) {   
    int N, L, h[10001], tmp;

    // ���� ����, �ʱ� ����, �� ���Ϻ� ���� �Է�
    scanf("%d %d", &N, &L);
    for (int i = 0; i < N; i++)
        scanf("%d", &h[i]);

    // ���� ���� �������� ���� (���� ����)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (h[j] > h[j + 1]) {
                tmp = h[j];
                h[j] = h[j + 1];
                h[j + 1] = tmp; 
            }
        }
    }

    // ���ʴ�� L�� ��
    for (int i = 0; i < N; i++) {
        if (h[i] <= L)
            L++;
    }

    // ��� ���
    printf("%d", L);

    return 0;
}