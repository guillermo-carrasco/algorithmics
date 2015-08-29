/*
A palindromic number reads the same both ways. The largest palindrome made from
the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>
#include <stdlib.h>

int num_digits(int n) {
    if (n < 10) return 1;
    else return 1 + num_digits(n/10);
}

char is_palindrom(int n) {
    int size = num_digits(n);
    char s_n[size];
    sprintf(s_n, "%d", n);
    int i = 0;
    while (i < size-i-1) {
        if (!(s_n[i] == s_n[size-i-1])) return 0;
        else i++;
    }
    return 1;
}

int main(int argc, char **argv) {
    // Pre: User passes as a parameter the number of digits to find the product from
    // better checking would be required
    int n = atoi(argv[1]);

    // Create biggest number with n digits and assign to n1 and n2
    char *s_biggest_with_n = malloc(n);
    int i, j;
    for(i=0; i<n; i++) s_biggest_with_n[i] = '9';
    int biggest_with_n;
    sscanf(s_biggest_with_n, "%d", &biggest_with_n);
    free(s_biggest_with_n);

    //Keep decreasing the numbers until the bigger palindrom id found
    int max = 0;
    for (i=biggest_with_n; num_digits(i) == n; i--) {
        for (j=biggest_with_n; num_digits(j) == n; j--) {
            int pal = i*j;
            if (is_palindrom(pal) && pal > max) {
                max = pal;
            }
        }
    }
    printf("%d\n", max);
    return 0;
}
