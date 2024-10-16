#include <stdio.h>
#include <math.h>

void difference_table(float a[][100], int n) {
    for (int j = 2; j <= n + 1; j++) {
        for (int i = 0; i <= n - j + 1; i++) {
            a[i][j] = a[i + 1][j - 1] - a[i][j - 1];
        }
    }

    printf("\nDifference Table:\n");
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n - i + 1; j++) {
            printf("%f ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float a[100][100], x, u, y;
    int n, fact;

    printf("Enter no. of terms: ");
    scanf("%d", &n);

    printf("Enter Values of x: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &a[i][0]);
    }

    printf("Enter Values of y: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &a[i][1]);
    }

    printf("Enter the value of x for which you want to find y: ");
    scanf("%f", &x);

    difference_table(a, n - 1);

    u = (x - a[0][0]) / (a[1][0] - a[0][0]);
    y = a[0][1];
    float u1 = u;
    fact = 1;

    for (int i = 2; i <= n; i++) { 
        y = y + (u1 * a[0][i]) / fact;
        fact = fact * i;
        u1 = u1 * (u - (i - 1));
    }

    printf("Value at X = %f is %f\n", x, y);

    return 0;
}
