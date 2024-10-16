#include<stdio.h>
#include<math.h>
int main()
{
    float exact_value,approximate_value;
    printf("Enter the exact value and approximate value ");
    scanf("%f %f",&exact_value,&approximate_value);
    float absolute_error=exact_value-approximate_value;
    float relative_error=absolute_error/exact_value;
    float percentage_error=relative_error*100;
    printf("Absolute_error: %f\n",absolute_error);
    printf("Relative_error: %f\n",relative_error);
    printf("percentage_error: %f\n",percentage_error);

}