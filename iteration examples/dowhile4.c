#include <stdio.h>

int main() {
    int i = 2;
    do {
        printf("%d squared = %d\n", i, i*i);
        i+=2;
    } while (i <= 10);
    return 0;
}
