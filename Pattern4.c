#include <stdio.h>

int main() {
    int n;
    printf("Enter the size : ");
    scanf("%d",&n);
    int matrix[n][n];
    int num = 1;

    for (int diag = 0; diag <= n+3; diag++) {
        if (diag % 2 == 0) {
            for (int i = 0; i <= diag; i++) {
                int row = i;
                int col = diag - i;
                if (row < n && col < n)
                    matrix[row][col] = num++;
            }
        } else {
            for (int i = 0; i <= diag; i++) {
                int row = diag - i;
                int col = i;
                if (row < n && col < n)
                    matrix[row][col] = num++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
