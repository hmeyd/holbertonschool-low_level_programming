#include <stdlib.h>
#include <time.h>
/**
*main -Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
	{
		printf("last digit of", n, "is", "and is greater than 5")
			else if (n % 10 == 0)
			{
				printf("last digit of", n, "is", "and is 0")
			}
			else if (n % 10 < 6 || n % 10 != 0)
			{
				printf("last digit of", n, "is", "and is less than 6 and not 0")
			}

	return (0);
}
