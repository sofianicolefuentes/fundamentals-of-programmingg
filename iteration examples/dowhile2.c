#include <stdio.h>

int main() {
    int n = 5;
    do {
        printf("%d! = ", n);
        int fact = 1;
        for (int j = 1; j <= n; j++) fact *= j;
        printf("%d\n", fact);
        n--;
    } while (n > 0);
    return 0;
}
