#include<stdio.h>
#include<math.h>
float equation(float);

float equation(float X)
{
     float answer=(3* pow(X,4))+(3*pow(X,3))-(5*pow(X,2))-7;
     return answer;
}
int main()
{
    float X;
    printf("Enter the Number: ");
    scanf("%f",&X);
    float answer=equation(X);
    printf("Answer is : %f",answer);
}