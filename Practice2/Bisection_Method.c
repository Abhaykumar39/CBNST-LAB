#include <stdio.h>
#include <math.h>
float fun(float x)
{
    return (pow(x, 3) - 4 * x - 9);
}
float bisection(float *x, float a, float b, int *itr)
{
    *x = (a + b) / 2;
    ++(*itr);
    printf("The Iteration no is %dX=%.3f\n", *itr, *x);
}
int main()
{
    int itr, maxmitr;
    float a, b, x, x1, allerr;
    printf("Enter the a,b,allerr,maxmitr");
    scanf("%f %f %f %d", &a, &b, &allerr, &maxmitr);
    bisection(&x, a, b, &itr);
    do
    {
        if (fun(a) * fun(x) < 0)
        {
            b = x;
        }
        else
        {
            a = x;
        }
        bisection(&x, a, b, &itr);
        if (fabs(x1 - x) < allerr)
        {
            printf("After %d iteration,root = %.3f", itr, x);
            return 0;
        }
        x1=x;
    } while (fabs(b - a) >= allerr && itr < maxmitr);
    printf("Solution is not convergent");
    return 1;
}