/* solutions.c */

#include "solutions.h"

void multiples_3_and_5() {
	int i, sum;

	printf("%s\n", "Multiples of 3 and 5");
	printf("%s\n", "If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.");
	printf("%s\n", "");

	sum = 0;

	for (i = 1; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}

	printf("%s%d\n", "The sum of multiples of 3 and 5 under 1000 is: ", sum);
	printf("%s\n", "Confirmed correct on Project Euler.");
	printf("%s\n", "");
}	