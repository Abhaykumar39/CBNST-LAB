#include <stdio.h>
#include <math.h>

double func(double x) {
    return 1 / (1 + x * x);
}

double simpson_one_third(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = func(a) + func(b);
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 2 == 0)
            sum += 2 * func(x);
        else
            sum += 4 * func(x);
    }
    return (h / 3) * sum;
}

int main() {
    double a = 0.0; 
    double b = 6.0; 
    int n = 6; 
    double result = simpson_one_third(a, b, n);
    printf("Approximate value of the integral: %.6f\n", result);
    return 0;
}
