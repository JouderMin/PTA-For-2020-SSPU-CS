#include <stdio.h>

int main(void) {
    int n, temp, max, min;
    scanf("%d", &n);
    int num[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    max = 0;
    min = 0;
    for (int i = 0; i < n; i++) {
        if (num[min] > num[i]) {
            min = i;
        }
    }
    temp     = num[0];
    num[0]   = num[min];
    num[min] = temp;
    for (int i = 0; i < n; i++) {
        if (num[max] < num[i]) {
            max = i;
        }
    }
    temp       = num[n - 1];
    num[n - 1] = num[max];
    num[max]   = temp;
    for (int k = 0; k < n; k++) {
        printf("%d ", num[k]);
    }

    return 0;
}
