#include<stdio.h>
#include<math.h>
float fun(float x)
{
    return (pow(x, 3) - 4 * x - 9);
}
void bisection(float *x, float a, float b, int *itr)
{
    *x = (a + b) / 2;
    ++(*itr);
    printf("Iteration no. %3d X= %7.5f\n", *itr, *x);
}
int main()
{
    int itr = 0, maxmitr;
    float x, a, b, allerr,x1;
    printf("\nEnter the value of a, b, allowed error, and maximum iteration:\n");
    scanf("%f %f %f %d", &a, &b, &allerr, &maxmitr);
    bisection(&x, a, b, &itr);
    do {
        if (fun(a) * fun(x) < 0) {
            b = x;
        }
        else {
            a = x;
        }
        bisection(&x, a, b, &itr);
        if (fabs(x1 - x) < allerr) {
            printf("After %d iterations, root = %.2f\n", itr, x);
            return 0;
        }
        x1 = x; 
    } while (fabs(b - a) > allerr && itr < maxmitr); 
    printf("The solution does not converge or iterations are not sufficient.\n");
    return 1;
}
