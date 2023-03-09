#include <stdio.h>
#include <math.h>

double f(double x);

// Bisection method
double method(double a, double b, int iteration) 
{
    if (f(a)*f(b) >= 0) 
	{
        printf("\nThere is no root in this interval\n");
	}

    double c;
    int i;

    for (i=1; i<iteration; i++) 
	{
        c = (a + b)/2;

		if (f(a)*f(c) < 0) 
		{
	    		b = c;
	        } 
		else if (f(b)*f(c) < 0) 
		{
	    		a = c;
        	}
		else if (f(c) == 0) 
		{
	    		printf("\nExact Solution Found: iteration %d\n", i);
			return c;
		} 
		else 
		{
	    		printf("\nBisection Method Failed\n");
			break;
	    	}
	}
    return c;
}

// Example function
double f(double x) 
{
    return 3*pow(x, 2) - 6*x - 2;
}

// prints solution
int main () 
{
    double a;
    double b;
    int iteration;

	printf("\n---STARTING BISECTION METHOD---\n");

	// Enter a
	printf("\nEnter an a:\t");
	scanf("%lf", &a);

	// Enter b
	printf("Enter a b:\t");
	scanf("%lf", &b);

	// Enter iteration
	printf("Enter the number of iterations:\t");
	scanf("%d", &iteration);

	double solution = method(a, b, iteration);
	
    printf("\nBisection Method: Solution is %lf\ninitial interval: [%lf, %lf]\n number of iterations is: %d\n", solution, a, b, iteration);

	printf("\n---ENDING BISECTION METHOD---\n");
    return 0;
}
