#include <stdio.h>

int CountDigit(int number, int digit);

int main(void) {
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

#include <math.h>
int CountDigit(int number, int digit) {
    int counter = 0;

    if (number == 0 && digit == 0) {
        return 1;
    }
    while (number != 0) {
        if (abs(number % 10) == digit) {
            counter++;
        }
        number /= 10;
    }

    return counter;
}
