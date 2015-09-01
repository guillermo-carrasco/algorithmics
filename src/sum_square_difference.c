/*
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers
and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural
numbers and the square of the sum.
*/

#define N 100

#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
	long sum_of_squares = 0;
	long square_of_sum = 0;
	int i;
	for (i=1; i<=N; i++) {
		sum_of_squares += pow(i, 2);
		square_of_sum += i;
	}
	square_of_sum = pow(square_of_sum, 2);
	printf("%ld\n", square_of_sum - sum_of_squares);
}

/*
A more efficient way would be to apply some mathematical properties. i.e

(1 + 2 + ... + n)^2 = n^2 * (n+1)^2 * 1/4

and

1^2 + 2^2 + ... + n^2 = n * (n+1) * (2n+1) * 1/6

Then its immediate, no need for a loop.
*/
