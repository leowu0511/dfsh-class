#include <iostream>
using namespace std;

int main() {
    // 輸入n群(直)m個(橫)s總和
    int n, m;
    scanf("%d %d", &n, &m);

    // 輸入二維數組
    int array[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // 計算每行的最大值
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

    // 計算最大值的總和
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += maxlist[i];
    }
    printf("%d\n", sum);

    // 判斷能夠整除的最大值並輸出
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

