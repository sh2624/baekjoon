// [�ǹ� 5] 15688 - �� �����ϱ� 5

#include <stdio.h>
#include <stdlib.h>

// ������ �Լ�
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b); // �������� ����
}

int main(void)
{
    int n, num[1000000];

    // ���� ����, ���� �Է�
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    // ������
    qsort(num, n, sizeof(int), compare);

    // ���� ��� ���
    for (int i = 0; i < n; i++)
        printf("%d \n", num[i]);

    return 0;
}