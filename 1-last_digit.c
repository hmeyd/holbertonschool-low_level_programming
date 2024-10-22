#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int a=1,n1=n;
	while (n > 10)
	{
		a=a*10;
	        n1=n1/a;
	}
	if (n1>5)
	{
		printf("last digit of",n,"is","and is greater than 5")
			else if (n1 == 0)
			{
				printf("last digit of",n,"is","and is 0")
			}
			else if (n1 <6 || n1 != 0)
			{
				printf("last digit of",n,"is","and is less than 6 and not 0")
			}

	return (0);
}
