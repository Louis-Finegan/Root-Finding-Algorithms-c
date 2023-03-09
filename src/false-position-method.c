#include <stdio.h>
#include <math.h>

double f(double x);


// False position method
double method(double a, double b, int iteration) 
{
	
	if ( f(a)*f(b) > 0 ) 
	{
		printf("\nThere is no root in this interval\n");
	}

	int i;
	double c;

	for (i=1; i<iteration; i++) 
	{
		c = b - f(b)*((b - a)/(f(b) - f(a)));

		if ( f(c)*f(b) > 0 ) 
		{
			b = c;
		}
		else if ( f(a)*f(c) > 0 ) 
		{
			a = c;
		}
		else if ( f(c) == 0 ) 
		{
			printf("\nExact solution found: iteration %d\n", i);
			return c;
		}
		else 
		{
			printf("\nFalse Position Failed\n");
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

        printf("\n---STARTING FALSE POSITION METHOD---\n");

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

    printf("\nFalse Position Method: Solution is %lf\ninitial interval: [%lf, %lf]\n number of iterations is: %d\n", solution, a, b, iteration);

        printf("\n---ENDING FALSE POSITION METHOD---\n");
    return 0;
}

