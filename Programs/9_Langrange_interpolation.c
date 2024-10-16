#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    float X[n], Y[n], x, sum = 0, term;
    int i, j;

    printf("Enter values of X: ");
    for (i = 0; i < n; i++) {
        scanf("%f", &X[i]);
    }

    printf("Enter values of Y: ");
    for (i = 0; i < n; i++) {
        scanf("%f", &Y[i]);
    }

    printf("Enter the value of x for which you want to find y: ");
    scanf("%f", &x);

    for (i = 0; i < n; i++) {
        term = Y[i];
        for (j = 0; j < n; j++) {
            if (i != j) {
                term = term * (x - X[j]) / (X[i] - X[j]);
            }
        }
        sum += term;
    }

    printf("Value at X = %f is %f\n", x, sum);

    return 0;
}
