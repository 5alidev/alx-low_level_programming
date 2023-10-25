/**
 * find_sqrt - helper function to find the sqrt
 *
 * @low: lower bound of the search range
 * @high: upper bound of the search range
 * @n: the original number for which the sqrt is sought
 *
 * Return: sqrt of @n
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (find_sqrt(n, guess + 1));
}
