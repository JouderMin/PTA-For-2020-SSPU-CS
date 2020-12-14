#include <stdio.h>

int main(void) {
    int n, temp, index;
    scanf("%d", &n);
    int num[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        index = i;
        for (int j = i + 1; j < n; j++) {
            if (num[j] > num[index])
                index = j;
        }
        temp       = num[index];
        num[index] = num[i];
        num[i]     = temp;
    }
    for (int k = 0; k < n; k++) {
        printf("%d", num[k]);
        if (k < n - 1) {
            printf(" ");
        }
    }

    return 0;
}
