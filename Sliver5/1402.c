// [�ǹ� 5] 1402 - �ƹ������̹�����A�����̵��ΰͰ���

#include <stdio.h>
#include <string.h>

int main(void) {
    // �׽�Ʈ ���̽� ���� �Է�
    int t, a, b;
    scanf("%d", &t);

    // �����غ��� 1�̶� -1 ������ �Է��� ���簣�� yes�� ���� �� �ۿ� ���� ������
    // ex) 6 = 1 * (-1) * 6�̰�, 1 + (-1) + 6 = 6�̹Ƿ� yes
    
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        printf("yes \n");
    }

    return 0;
}