#include <stdio.h>
/*
 * op_add: returns the sum
 * @a: un entier
 * @b: un entier
 */
int op_add(int a, int b)
{
	printf ("%d",a + b);
}
/*
 * op_add: returns the sum
 * @a: un entier
 * @b: un entier
 */
int op_sub(int a, int b)
{
	printf ("%d",a - b);
}
/*
 * op_mul: returns the sum
 * @a: un entier
 * @b: un entier
 */
int op_mul(int a, int b)
{
	printf ("%d",a * b);
}
/*
 * op_div: returns the sum
 * @a: un entier
 * @b: un entier
 */
int op_div(int a, int b)
{
	if (b != 0)
		printf ("%d",a / b);
	else
	{
		prinf ("Error");
		exit (100);
	}
		
}
/*
 * op_mod: returns the sum
 * @a: un entier
 * @b: un entier
 */
int op_mod(int a, int b)
{
	if(b != 0)
		printf ("%d",a % b);
	
        if (b != 0)
                printf ("%d",a / b);
        else
        {
                prinf ("Error");
                exit (100);
        }
}
