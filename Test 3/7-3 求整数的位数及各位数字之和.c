#include <stdio.h>

int main(void) {
    int sum = 0, a = 0, input;

    scanf("%d", &input);
    while (input != 0) {
        a++;
        sum += input % 10;
        input /= 10;
    }
    printf("%d %d\n", a, sum);

    return 0;
}
