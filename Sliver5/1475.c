// [�ǹ� 5] 1475 - �� ��ȣ

#include <stdio.h>

int main(void) {   
    // �� �Է� 
    int n, cnt = 0;
    scanf("%d", &n);

    // ���� ������ �� �̻��ѵ�, �ᱹ ��Ʈ �˻��ϸ鼭 1 ���� ī��Ʈ���ָ� �ȴ�.
    while (n != 0) {
        if (n & 1) cnt++;
        n >>= 1;
    }

    // ��� ���
    printf("%d", cnt);

    return 0;
}