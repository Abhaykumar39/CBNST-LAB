#include <stdio.h>
#include <math.h>

float f(float x) {
    return x - exp(-x);
}

float df(float x) {
    return 1 + exp(-x); 
}

int main() {
    int itr, maxmitr;
    float h, x0, x1, allerr;
    printf("\nEnter x0, allowed error, and maximum iterations:\n");
    scanf("%f %f %d", &x0, &allerr, &maxmitr);
    for (itr = 1; itr <= maxmitr; itr++) {
        h = f(x0) / df(x0);
        x1 = x0 - h;
        printf("At Iteration no. %3d, x = %.3f\n", itr, x1);
        if (fabs(h) < allerr) {
            printf("After %3d iterations, root = %.3f\n", itr, x1);
            return 0;
        }
        x0 = x1;
    }
    printf("The required solution does not converge or iterations are insufficient\n");
    return 1;
}
