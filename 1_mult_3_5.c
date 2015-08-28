#include <stdlib.h>
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i;
    int res = 0;
    for(i=0; i<n; i++) {
        if(i%3 == 0 || i%5 == 0) res += i;
    }
    printf("The sum of all multiples of 3 and 5 below %d is %d\n", n, res);
}
