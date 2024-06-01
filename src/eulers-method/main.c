#include <stdio.h>

int main()
{
	
	// Euler's Method: A method for numerically approximating a solution to a first order ODE given an initial value
	// Should take in an equation of the form y' = f(x, y)
	
	// Initial condition
	float init_x = 0.0f;
	float init_y = 1.0f;
	
	float approx_x = 0.6f; // value of x to approximate
	float h = 0.3; // Step size
	float prev_y = init_y; // Iteratively calculate value of y

	for (float prev_x = init_x; prev_x < approx_x; prev_x += h)
	{
		prev_y = prev_y + (h * ( prev_x + prev_y ) ); // y_n+1 = y_n + h * f(x, y), replace f(x, y) as needed	
	}	

	printf("Approximation at x = %f: y = %f\n", approx_x, prev_y);


	return 0;

}
