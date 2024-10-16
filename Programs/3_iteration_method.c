#include <stdio.h>
#include <math.h>

#define MAX_ITER 7

double equation(double x) {
    return cos(x) - 3 * x + 1;
}

double iterate(double x) {
    return cos(x) / 3 + 1.0 / 3;
}

int main() {
    int iter;
    double x0, x1, error;
    
    x0 = 0.5; 
    
    printf("Initial guess: %.6f\n", x0);
    printf("------------------------------------------\n");
    printf("Iteration |   x(i)   |   x(i+1)   |  Error \n");
    printf("------------------------------------------\n");
    
    for (iter = 0; iter < MAX_ITER; iter++) {
        x1 = iterate(x0); // Calculate next approximation
        error = fabs((x1 - x0) / x1);
        printf("    %2d    | %.6f | %.6f | %.6f\n", iter + 1, x0, x1, error);
        x0 = x1; 
    }

    printf("------------------------------------------\n");
    printf("Approximate root after %d iterations: %.6f\n", MAX_ITER, x1);
    return 0;
}
