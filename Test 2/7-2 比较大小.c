#include <stdio.h>

void swap(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main(void) {
    int input[3];

    scanf("%d %d %d", &input[0], &input[1], &input[2]);
    for (int i = 1; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            if (input[i] < input[j]) {
                swap(&input[i], &input[j]);
            }
        }
    }
    printf("%d->%d->%d\n", input[0], input[1], input[2]);

    return 0;
}
