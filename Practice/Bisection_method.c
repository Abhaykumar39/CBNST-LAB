#include <stdio.h>
#include <math.h>
float fun(float x)
{
    return (pow(x, 3) - 4 * x - 9);
}
void bisection(float *x, float a, float b, int *itr)
{
    *x = (a + b) / 2;
    ++(*itr);
    printf("The Iteration no. is %dx=%.3f\n", *itr, *x);
}
int main()
{
    int itr = 0, maxmitr;
    float x, a, b, x1, allerr;
    printf("Enter the value of a,b,allerr and maximum iterations: ");
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
        bisection(&x1, a, b, &itr);
        if (fabs(x1 - x) < allerr)
        {
            printf("After %d iterations, root is %.3f\n", itr, x);
            return 0;
        }
        x=x1;
    } while ((fabs(b - a) > allerr) && itr < maxmitr);
    printf("Solution is not convergent\n");
    return 1;
}