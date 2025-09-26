#include <stdio.h>

int main() {
    int sum = 0, num;
    do {
        printf("Enter number: ");
        scanf("%d", &num);
        sum += num;
    } while (sum < 50);
    printf("Final sum = %d", sum);
    return 0;
}
