#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1=1;
    int n2=2;
    int sum=2;
    while (n2 <= 4000000) {
        int aux = n2;
        n2 += n1;
        n1 = aux;
        if (n2%2 == 0) sum += n2;
    }
    printf("%d\n", sum);
}
