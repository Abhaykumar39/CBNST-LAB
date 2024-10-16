#include <stdio.h>
#include <math.h>
double func(double x)
{
    return 1 / (1 + x * x);
}
double trapezoidal_rule(double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = func(a) + func(b);
    for (int i = 1; i < n; i++)
    {
        double x = a + i * h;
        sum += 2 * func(x);
    }
    return (h / 2) * sum;
}
int main()
{
    double a = 0.0;
    double b = 6.0;
    int n = 6;
    double result = trapezoidal_rule(a, b, n);
    printf("Approximate value of the integral: %.6f\n", result);
    return 0;
}