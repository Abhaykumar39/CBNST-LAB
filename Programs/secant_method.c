#include <stdio.h>
#include <math.h>

float f(float x) {
    return (x * x * x - 4); 
}

int main() {
    float a, b, c, e; 
    int count = 1, n; 


    printf("\nEnter the initial guesses a and b:\n");
    scanf("%f %f", &a, &b);
    printf("Enter the allowed error and maximum number of iterations:\n");
    scanf("%f %d", &e, &n);

    do {
        if (f(a) == f(b)) {
            printf("\nSolution cannot be found as the values of a and b are same.\n");
            return 0; 
        }

        c = (a * f(b) - b * f(a)) / (f(b) - f(a));
        a = b;
        b = c;

        
        printf("Iteration No-%d    x=%f\n", count, c);
        count++;

        if (count == n)
            break;

    } while (fabs(f(c)) > e); 

    printf("\nThe required solution is %f\n", c);

    return 0; 
}
