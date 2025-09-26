#include <stdio.h>

int main() {
    int n = 50;
    while (n % 7 != 0) {
        n++;
    }
    printf("First multiple of 7 >= 50 is %d", n);
    return 0;
}
