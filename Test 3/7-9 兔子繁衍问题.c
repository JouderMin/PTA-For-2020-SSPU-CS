#include <stdio.h>

int main(void) {
    int number[22] = {1, 1};
    int i, n;

    scanf("%d", &n);
    if (n == 1) {
        printf("1");
    } else {
        for (i = 2; i <= 21; i++) {
            number[i] = number[i - 1] + number[i - 2];
            if (number[i] >= n) {
                break;
            }
        }
        printf("%d", i + 1);
    }

    return 0;
}
