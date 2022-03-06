#include <stdio.h>



int twice (int *k) {
    *k = *k + *k;
}

int main () {
    int a = 10;
    int *p = &a;

    twice(&a);
    printf("%d\n", a);
}
