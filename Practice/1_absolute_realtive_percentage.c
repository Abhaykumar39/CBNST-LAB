#include<stdio.h>
int main()
{
    int exact_value,approx_value;
    printf("Enter the exact value and approx value");
    scanf("%d %d",&exact_value,&approx_value);
    float absolute_error,relative_error,percentage_error;

    absolute_error=exact_value-approx_value;
    relative_error=absolute_error/exact_value;
    percentage_error=relative_error*100;

    printf("Absolute error is %f\n",absolute_error);
    printf("relative error is %f\n",relative_error);
    printf("percentage error is %f",percentage_error);
}