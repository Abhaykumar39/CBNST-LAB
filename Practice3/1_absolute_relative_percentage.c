#include<stdio.h>
#include<math.h>
int main()
{
    float exact_value,approx_value;
    printf("Enter the exact value and approximated value: ");
    scanf("%f %f",&exact_value,&approx_value);
    float absolute,relative,percentage;
    absolute = exact_value-approx_value;
    relative=absolute/exact_value;
    percentage=relative*100;
    printf("relative error:%f\n",relative);
    printf("absolute error:%f\n",absolute);
    printf("Percentage:%f",percentage);
}