#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	printf("last digit of\n%d and is greater tnan 5",n % 10);
	else if (n % 10 == 0)
	printf("last digit of\n%dand is O ",n % 10);
	else
	printf("last digit of\n%daand is less than 6 and not 0",n % 10);
return (0);
}
