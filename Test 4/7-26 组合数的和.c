#include <stdio.h>

int main(void) {
    int n, sum = 0;
    scanf("%d", &n);
    int num[n];
    int comb[n * (n - 1)];

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    for (int j = 0, l = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            if (j != k) {
                comb[l] = num[j] * 10 + num[k];
                l++;
            }
        }
    }
    for (int i = 0; i < n * (n - 1); i++) {
        sum += comb[i];
    }
    printf("%d\n", sum);

    return 0;
}
