// [�ǹ� 5] 2751 - �� �����ϱ� 2

#include <stdio.h>
#include <stdlib.h>

// ������ (�������� ����)
int compare(const void *num1, const void *num2)
{
    if (*(int *)num1 > *(int *)num2)
        return 1;
    else if (*(int *)num1 < *(int *)num2)
        return -1;
    else
        return 0;
}

int main(void)
{
    // ���� �Է�
    int n;
    scanf("%d", &n);

    // �迭 ���� �Ҵ� �� �Է�
    int *num = (int *)malloc(sizeof(int) * n);
    if (num == NULL)
    {
        printf("�޸� �Ҵ� ����\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    // ������
    qsort(num, n, sizeof(int), compare);

    // ��� ���
    for (int i = 0; i < n; i++)
        printf("%d \n", num[i]);

    printf("\n\n");
    system("pause");
    return 0;
}