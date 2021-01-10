#include <stdio.h>

void sort(int * a, int n) {
    int temp;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp     = a[j];
                a[j]     = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    int a[10] = {0};
    int temp  = -1;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    sort(a, 10);
    for (int i = 0; i < 10; i++) {
        if (a[i] != temp) {
            printf("%d ", a[i]);
        }
        temp = a[i];
    }

    return 0;
}
