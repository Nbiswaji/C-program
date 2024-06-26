#include <stdio.h>
#include <string.h>

// Function to find the LCS and construct the c table and b table
void findLCS(char X[], char Y[]) {
    int m = strlen(X);
    int n = strlen(Y);
    int c[m + 1][n + 1];
    char b[m + 1][n + 1]; // 'D' for diagonal, 'U' for up, 'L' for left

    // Initialize the tables
    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0 || j == 0) {
                c[i][j] = 0;
                b[i][j] = 'D'; // Initialize with diagonal
            } else if (X[i - 1] == Y[j - 1]) {
                c[i][j] = c[i - 1][j - 1] + 1;
                b[i][j] = 'D'; // Diagonal
            } else {
                if (c[i - 1][j] >= c[i][j - 1]) {
                    c[i][j] = c[i - 1][j];
                    b[i][j] = 'U'; // Up
                } else {
                    c[i][j] = c[i][j - 1];
                    b[i][j] = 'L'; // Left
                }
            }
        }
    }

    // Print the LCS
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

    // Display the c table
    printf("\nC Table:\n");
    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    // Display the b table
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
