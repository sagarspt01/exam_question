#include <stdio.h>

int main() {
    int n, copy, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    copy = n;
    while (copy > 0) {
        reverse = reverse * 10 + copy % 10;
        copy /= 10;
    }
    if (n == reverse) {
        printf("%d is a palindromic number\n", n);
    } else {
        printf("%d is not a palindromic number\n", n);
    }
    return 0;
}
