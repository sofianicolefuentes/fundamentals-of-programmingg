#include <stdio.h>

int main() {
    char c;
    do {
        printf("Enter a letter (q to quit): ");
        scanf(" %c", &c);
    } while (c != 'q');
    return 0;
}
