#include <stdio.h>
#include <stdlib.h>

#define N 20

int main() {
    char found = 0;
    int res = N;
    while (!found) {
        int i;
        for (i=N; i > 1; i--) {
            if (res%i !=  0)
                break;
        }
        if (i == 1) found = 1;
        else res++;
    }
    printf("Smallest multiple of 1..%d is %d\n", N, res);
    return 0;
}
