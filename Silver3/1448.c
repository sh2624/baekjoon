// [�ǹ� 3] 1448 - �ﰢ�� �����

#include <stdio.h>
#include <stdlib.h>

// ������ �Լ�
int compare(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a); // �������� ����
}

int main(void)
{
    // ���� ����, ���� �Է�
    int n, straw[10000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &straw[i]);

    // ������
    qsort(straw, n, sizeof(int), compare);

    // �ﰢ�� ���� ���� ���� �˻� (�������� �����̹Ƿ� �� ���̽��� �� �Ǹ� �� �ڵ� �� ��)
    for (int i = 0; i < n - 2; i++)
    {
        if (straw[i] < straw[i + 1] + straw[i + 2])
        {
            printf("%d", straw[i] + straw[i + 1] + straw[i + 2]); // ������ �� �ִ� ���
            return 0;
        }
    }
    printf("-1"); // ������ ������ ���� ��
    return 0;
}