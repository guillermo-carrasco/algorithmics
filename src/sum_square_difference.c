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

long sum_of_squares(int n) {
	int i;
	int res = 0;
	for (i=1; i<=n; i++) res += (long) pow(i, 2);
	return res;
}

long square_of_sum(int n) {
	int i;
	int res = 0;
	for (i=1; i<=n; i++) res += i;
	return (long) pow(res, 2);
}

int main() {
	long sum_o_s = sum_of_squares(N);
	long square_o_s = square_of_sum(N);
	printf("%ld\n", square_o_s - sum_o_s);
}
