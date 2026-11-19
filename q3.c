#include <stdio.h>
int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumOfNaturalNumbers(n - 1);
}
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int result = sumOfNaturalNumbers(num);
        printf("Sum of natural numbers up to %d is: %d\n", num, result);
    }
}
