#include <stdio.h>

int main() {
    int i, max, cnt = 0;
    scanf("%d", &i);
    int num[i];

    for (int j = 0; j < i; j++) {
        scanf("%d", &num[j]);
    }
    max = num[0];
    for (int j = 1; j < i; j++) {
        if (num[j] > max) {
            max = num[j];
            cnt = j;
        }
    }
    printf("%d %d", max, cnt);

    return 0;
}
