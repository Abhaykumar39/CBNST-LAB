#include <stdio.h>
#include <math.h>
float f(float x)
{
    return pow(x, 3) - 5 * x + 1;
}
int main()
{
    float a, b, c, e;
    int count = 1, n;
    printf("Enter the value of a,b,allowed error,maximum iteration ");
    scanf("%f %f %f %d", &a, &b, &e, &n);
    do
    {
        if (f(a) == f(b))
        {
            printf("Value of a and b are not correct");
            return 0;
        }
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));
        a = b;
        b = c;
        printf("The Iteration no is %dx=%.3f\n", count, c);
        count++;
        if (count == n)
        {
            break;
        }
    } while (fabs(f(c) > e));
    printf("The required solution is %.3f", c);
    return 0;
}