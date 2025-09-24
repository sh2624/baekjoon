// [�ǹ� 4] 11047 - ���� 0

#include <stdio.h>
#include <stdlib.h>

// ������ �Լ�
int compare(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

int main(void)
{
    // ���� ����, ��ġ�� �� �Է�
    int n, k;
    scanf("%d %d", &n, &k);

    // �� ������ ��ġ �Է�
    int coin[10];
    for (int i = 0; i < n; i++)
        scanf("%d", &coin[i]);

    // ������ (��������)
    qsort(coin, n, sizeof(int), compare);

    // ��ġ�� ū �������� ���� ���
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (k >= coin[i]) // ���� �ݾ��� ���� ���� ��ġ���� ũ�ų� ������
        {
            cnt += k / coin[i]; // �ִ��� ���
            k %= coin[i];       // ���� �ݾ� ����
        }
        if (k == 0) // ���� �ݾ��� 0�� �Ǹ� ����
            break;
    }

    printf("%d", cnt);

    return 0;
}