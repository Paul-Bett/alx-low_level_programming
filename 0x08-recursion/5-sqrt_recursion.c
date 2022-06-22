/**
 * sqrt_tracer - Guess rangom numbers to get square root
 * @n: Integer Value
 * @min: Lower guess constraint
 * @max: Upper guess constraint
 * Return: Square root
 */
int sqrt_tracer(int n, int min, int max)
{
	int guess = (min + max) / 2;
	int guessans = guess * guess;

	if (max >= min)
	{
	if (guessans == n)
		return (guess);
	else if (guessans < n)
		sqrt_tracer(n, guess + 1, max);
	else
		sqrt_tracer(n, min, guess - 1);
	}
	else
		return (-1);
}

/**
 * _sqrt_recursion - Performs square root of a number
 * @n: Integer Value
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	return (sqrt_tracer(n, 1, n));
}
