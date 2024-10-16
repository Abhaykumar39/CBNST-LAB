#include <stdio.h>
#include <math.h>
float f(float x)
{
    return (pow(x, 3) - 3 * x + 1);
}
void regula(float *x, float x0, float x1, float fx0, float fx1, int *itr)
{
    *x = ((x0 * f(x1)) -(x1 * f(x0))) / (f(x1) - f(x0));
    ++(*itr);
    printf("Iteration No. is %dX=%f\n", *itr, *x);
}
int main()
{
    int itr = 0, maxmitr;
    float x0, x1, x2, allerr, x3;
    printf("Enter the value of x0 , x1 ,allerr , maxmitr\n");
    scanf("%f %f %f %d", &x0, &x1, &allerr, &maxmitr);
    regula(&x2, x0, x1, f(x0), f(x1), &itr);
    do
    {
        if (f(x0) * f(x2) < 0)
        {
            x1 = x2;
        }
        else
        {
            x0 = x2;
        }
        regula(&x3, x0, x1, f(x0), f(x1), &itr);
        if (x3-x2 < allerr)
        {
            printf("After %d iteration root=%f\n", itr, x3);
            return 0;
        }
        x2=x3;
    } while (itr < maxmitr);
    printf("Solution is not convergent ");
    return 1;
}