#include <stdio.h>

int main(void) {
    int min = 0, input, n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &input);
        if (i == 1) {
            min = input;
        } else if (input <= min) {
            min = input;
        }
    }
    printf("min = %d", min);

    return 0;
}
