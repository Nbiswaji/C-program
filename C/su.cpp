#include <stdio.h>
#include <string.h>
void findLCS(char X[], char Y[]) {
    int m = strlen(X);
    int n = strlen(Y);
    int c[m + 1][n + 1];
    char b[m + 1][n + 1];
    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0 || j == 0) {
                c[i][j] = 0;
                b[i][j] = 'D';
            } else if (X[i - 1] == Y[j - 1]) {
                c[i][j] = c[i - 1][j - 1] + 1;
                b[i][j] = 'D';
            } else {
                if (c[i - 1][j] >= c[i][j - 1]) {
                    c[i][j] = c[i - 1][j];
                    b[i][j] = 'U';
                } else {
                    c[i][j] = c[i][j - 1];
                    b[i][j] = 'L';
                }
            }
        }
    }
    printf("Longest Common Subsequence: ");
    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (b[i][j] == 'D') {
            printf("%c", X[i - 1]);
            --i;
            --j;
        } else if (b[i][j] == 'U') {
            --i;
        } else {
            --j;
        }
    }
    printf("\n");
    printf("\nC Table:\n");
    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    printf("\nB Table:\n");
    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            printf("%c ", b[i][j]);
        }
        printf("\n");
    }
}
int main() {
    char X[] = "AGGTAB";
    char Y[] = "GXTXAYB";
    findLCS(X, Y);
    return 0;
}
