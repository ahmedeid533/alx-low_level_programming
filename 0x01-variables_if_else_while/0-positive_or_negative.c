#include <stdlib.h>
#include <time.h>

/**
 * main - start point fir function that determen the number is positive or negative
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
