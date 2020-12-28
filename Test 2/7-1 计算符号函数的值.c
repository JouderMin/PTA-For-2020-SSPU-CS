#include <stdio.h>

int main(void) {
    int input, r;

    scanf("%d", &input);
    if (input > 0) {
        r = 1;
    } else if (input == 0) {
        r = 0;
    } else {
        r = -1;
    }
    printf("sign(%d) = %d", input, r);

    return 0;
}
