#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void Abs_error(float pi, float approx_pi)
{
    float error = pi - approx_pi;
    float abserror = fabs(error);
    float relerror = abserror / pi;
    float percerror = relerror * 100;
    printf("Absolute Error Is: %f\n", abserror);
    printf("Relative Error is: %f\n", relerror);
    printf("Percentage Error Is: %f\n", percerror);
}
int main()
{
    float pi = 3.1415926;
    float approx_pi = 22.0 / 7;
    Abs_error(pi, approx_pi);
     return 0;
}