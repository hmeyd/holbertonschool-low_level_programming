#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)

{

        int n;

        srand(time(0));

        n = rand() - RAND_MAX / 2;


        if (n < 0)

                printf("n is negative\n");

        else if (n > 0)

                printf("n is positive\n");

        else

                printf("n is zero\n");

 

        return (0);

}
