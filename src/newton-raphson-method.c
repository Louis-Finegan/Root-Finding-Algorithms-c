#include <stdio.h>
#include <math.h>

// fuction prototype
double f(double x);

double fdash(double x);

double method(double start_num, int iteration) {
    // will run for a chosen amount of iterations //
    int i;
    double x = start_num;


    for (i = 0; i < iteration; i++)
    {
        x = x - (f(x)/fdash(x));

		if (f(x) == 0)
		{
			printf("\nExact solution found: iteration %d\n", i);
			return x;
		}
    }
    return x;
}

double f(double x) {
    return 3*pow(x, 2) - 6*x - 2;
}

double fdash(double x) {
    return 6*x-6;
}

int main() {
    double start_num ;
    int iteration;

	printf("\n---STARTING NEWTOW RAPHSON METHOD---\n");

	// Enter an initial guess
	printf("\nEnter an initial guess:\t");
	scanf("%lf", &start_num);

	// Enter iteration
	printf("Enter the number of iterations:\t");
	scanf("%d", &iteration);

    double solution = method(start_num, iteration);
    
    // Prints the solution in terminal
    printf("\nNewton Raphson Method: Solution is %lf\nnumber of iterations is: %d\n", solution, iteration);

	printf("\n---ENDING NEWTON RAPHSON METHOD---\n");
	return 0;
}

