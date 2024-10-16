#include<stdio.h>
#include<math.h>
float func(float x)
{
    return ((pow(x,3))-4*x-9);
}
void bisection(float *x, float a , float b,int *itr)
{
    *x=(a+b)/2;
    ++(*itr);
    printf("Iteration no. is %dx=%.2f\n",*itr,*x);
}
int main()
{
    float a,b,x,x1,allerr;
    int itr=0,maxitr;
    printf("Enter the value of a ,b , allerr and maximum iteration: ");
    scanf("%f %f %f %d",&a,&b,&allerr,&maxitr);
    bisection(&x,a,b,&itr);
    do
    {
        if (func(x)*func(a)<0)
        {
            b=x;
        }
        else{
            a=x;
        }
        bisection(&x,a,b,&itr);
        if(fabs(x1-x)<allerr)
        {
            printf("After %d iteration, root=%.2f",itr,x);
            return 0;
        }
        x1=x;
    } while (b-a>allerr && itr<maxitr);
    printf("Solution is not convergent");
}