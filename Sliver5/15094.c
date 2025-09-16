// [�ǹ� 5] 15904 - UCPC�� ������ �����ϱ�?

#include <stdio.h>
#include <string.h>

int main(void) {
    // ���ڿ� �Է�(���� ����)
    char sentence[1001];
    scanf("%[^\n]s", sentence);

    int isUcpc = 0, len = strlen(sentence), idx;

    // 1) 'U' �˻�
    for (int i = 0; i < len; i++) {
        if (sentence[i] == 'U') {
            idx = i + 1;
            break;
        }
    }

    // 2) 'C' �˻�(���� �ε�������)
    for (int i = idx; i < len; i++) {
        if (sentence[i] == 'C') {
            idx = i + 1;
            break;
        }
    }

    // 3) 'P' �˻�(���� �ε�������)    
    for (int i = idx; i < len; i++) {
        if (sentence[i] == 'P') {
            idx = i + 1;
            break;
        }
    }

    // 4) 'C' �˻� (���� �ε�������), ã���� ���� ���� 1�� �ٲ�      
    for (int i = idx; i < len; i++) {
        if (sentence[i] == 'C') {
            isUcpc = 1;
            break;
        }
    }

    // ���� ���ο� ���� ��� ���
    if (isUcpc == 1)
        printf("I love UCPC");
    else
        printf("I hate UCPC");

    return 0;
}