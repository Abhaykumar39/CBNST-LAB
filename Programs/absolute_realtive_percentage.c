#include<stdio.h>
#include<math.h>
void absolute(float, float);
void relative(float, float);
void percenatge(float, float);

void absolute(float pi, float approx)
{
    float absolute_error= pi-approx;
    printf("absolute error is : %f\n", fabs(absolute_error));

}
void realtive(float pi, float approx)
{
    float relative_error= (pi-approx)/pi;
    printf("realtive error is : %f\n",fabs(relative_error));

}
void percentage(float pi, float approx)
{
    float percentage_error= ((pi-approx)/pi)*100;
    printf("percentage error is : %f\n", fabs(percentage_error));

}
int main()
{
    float pi=3.1415926;
    float approx =22.0/7;
    absolute(pi, approx);
    realtive(pi, approx);
    percentage(pi, approx);
}
