#include <stdio.h>
#include <math.h>
int main()
{
    float exact_value, approx_value;
    float absolute_error, relative_error, percentage_error;
    printf("Enter the actual value: ");
    scanf("%f", &exact_value);

    printf("Enter the measured value: ");
    scanf("%f", &approx_value);

    absolute_error = fabs(exact_value - approx_value);
    relative_error = absolute_error / fabs(exact_value);
    percentage_error = relative_error * 100;
    
    printf("Absolute Error: %f\n", absolute_error);
    printf("Relative Error: %f\n", relative_error);
    printf("Percentage Error: %f%%\n", percentage_error);
    return 0;
}
