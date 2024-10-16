#include<stdio.h>
#include<math.h>
#define f(x,y)(y-2*x)
int main()
{
    float x0,y0,x,y,h,xn;
    printf("enter the value of x0,y0,h,xn ");
    scanf("%f %f %f %f",&x0,&y0,&h,&xn);
    x=x0;
    y=y0;
    while(x<xn)
    {
        y=y+h*f(x,y);
        x=x+h;
        printf("x=%f\ty=%f\n",x,y);
    }
    return 0;

}