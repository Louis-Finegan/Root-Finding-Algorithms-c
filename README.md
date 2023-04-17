# Root Finding Algorithms in the c programming language

Writen in Linux Ubuntu 20.04.2 LTS.

## Algorithms

1. Bisection Method.

2. False Position (Regula Falsi) Method.

3. Newton-Raphson Method.

4. Fixed Point Method.

## Example Case:

Let $f(x) = 3x^2 - 2x +6$. The value can $x$ such that $f(x)=0$ was calculated by the above algorithms.

## How to use

1. Run the following command in the terminal:

<pre><code>
	./run.sh
</code></pre>

2. Enter in the required quantities in the different fields until the program finshes.

## Results


<pre><code>
	STARTING PROGRAM

	File Names:
	1. bisection-method.c
	2. false-position-method.c
	3. fixed-point-iteration-method.c
	4. newton-raphson-method.c

	Were Compiled
	
	Running applications:


	---STARTING BISECTION METHOD---

	Enter an a: -1
	Enter a b:  0
	Enter the number of iterations: 100

	Bisection Method: Solution is -0.290994
	initial interval: [-1.000000, 0.000000]
 	number of iterations is: 100

	---ENDING BISECTION METHOD---

	---STARTING FALSE POSITION METHOD---

	Enter an a: -1
	Enter a b:  0
	Enter the number of iterations: 100

	False Position Method: Solution is -0.290994
	initial interval: [-1.000000, 0.000000]
	 number of iterations is: 100

	---ENDING FALSE POSITION METHOD---

	---STARTING FIXED POINT ITERATION---

	Enter an initial guess: 0

	Enter a tolerance:  0.00001
	Enter the maximum number of iterations: 1000

	Fixed Point Iteration: Solution is -0.290995

	---ENDING FIXED POINT ITERATION---

	---STARTING NEWTOW RAPHSON METHOD---

	Enter an initial guess: 0
	Enter the number of iterations: 100

	Newton Raphson Method: Solution is -0.290994
	number of iterations is: 100

	---ENDING NEWTON RAPHSON METHOD---

	ENDING PROGRAM
</code></pre>



