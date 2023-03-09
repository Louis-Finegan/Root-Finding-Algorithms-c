#include <stdio.h>
#include <math.h>


double f(double x);

double g(double x);

double method(double start_num, double tolerance, int max_iterations)
{
	double x = start_num;
	double error = tolerance + 1;
	int i;

	while (i < max_iterations && error > tolerance) 
	{
        double x_next = g(x);
        error = fabs(x_next - x);

		if ( f(x) == 0 )
		{
			printf("Exact solution found: iteration %d", i);
			return x;
		}

        x = x_next;
        i++;
    }


	if (error > tolerance) {
        printf("Fixed Point Iteration failed to converge\n");
        return NAN;
    }

	return x;
}

double f(double x) 
{
    return 3*pow(x, 2) - 6*x - 2;
}

double g(double x)
{
	return 2/(3*x - 6);
}

int main() {
    double start_num;
	double tolerance;
    int max_iterations;

    printf("\n---STARTING FIXED POINT ITERATION---\n");

    // Enter an initial guess
    printf("\nEnter an initial guess:\t");
    scanf("%lf", &start_num);

	// Enter a tolerance
	printf("\nEnter a tolerance:\t");
	scanf("%lf", &tolerance);

    // Enter iteration
    printf("Enter the maximum number of iterations:\t");
    scanf("%d", &max_iterations);

    double solution = method(start_num, tolerance, max_iterations);

	// Checks if the root is not divergent
	if ( !isnan(solution) )
	{
    // Prints the solution in terminal
    printf("\nFixed Point Iteration: Solution is %lf\n", solution);
	}

    printf("\n---ENDING FIXED POINT ITERATION---\n");
    return 0;
}
