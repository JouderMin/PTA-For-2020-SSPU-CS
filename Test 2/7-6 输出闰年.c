#include <stdio.h>

int main(void) {
    int year, count = 0;
    scanf("%d", &year);

    if (year <= 2000 || year > 2100) {
        printf("Invalid year!");
    } else {
        for (int i = 2004; i <= year; i += 4) {
            if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
                printf("%d\n", i);
                count++;
            }
        }
        if (count == 0) {
            printf("None");
        }
    }

    return 0;
}
