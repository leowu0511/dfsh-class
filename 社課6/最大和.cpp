#include <iostream>
using namespace std;

int main() {
    // ��Jn�s(��)m��(��)s�`�M
    int n, m;
    scanf("%d %d", &n, &m);

    // ��J�G���Ʋ�
    int array[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // �p��C�檺�̤j��
    int maxlist[n];
    for (int i = 0; i < n; i++) {
        int max = array[i][0];
        for (int j = 0; j < m; j++) {
            if (array[i][j] >= max) {
                max = array[i][j];
            }
        }
        maxlist[i] = max;
    }

    // �p��̤j�Ȫ��`�M
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += maxlist[i];
    }
    printf("%d\n", sum);

    // �P�_����㰣���̤j�Ȩÿ�X
    int divlist[n];
    int divcount = 0;
    for (int i = 0; i < n; i++) {
        if (sum % maxlist[i] == 0) {
            divlist[divcount] = maxlist[i];
            divcount++;
        }
    }

    if (divcount == 0) {
        printf("-1\n");
    } else {
        for (int i = 0; i < divcount; i++) {
            printf("%d", divlist[i]);
            if (i < divcount - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

