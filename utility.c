/* utility.c */

#include "utility.h"

bool is_prime(int value) {
	int i;

	printf("%s%d\n", "value in is_prime: ", value);

	for (i = 2; i < value; i++) {

		printf("%s%d%s%d\n", "value % ", i, " = ", value % i);

		if (value % i == 0)
			return false;
	}

	return true;
}