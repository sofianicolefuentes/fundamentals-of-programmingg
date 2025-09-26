#include <stdio.h>

int main() {
    int i = 1, prod = 1;
    while (i <= 4) {
        prod *= i;
        i++;
    }
    printf("Product = %d", prod);
    return 0;
}
