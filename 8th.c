#include <stdio.h>
#include <math.h>

int main() {
    int n, copy, d, count = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    copy = n;
    while (copy > 0) {
        copy /= 10;
        count++;
    }
    copy = n;
    while (copy > 0) {
        d = copy % 10;
        sum += pow(d, count);
        copy /= 10;
    }
    if (sum == n) {
        printf("%d is an Armstrong number\n", n);
    } else {
        printf("%d is not an Armstrong number\n", n);
    }
    return 0;
}
