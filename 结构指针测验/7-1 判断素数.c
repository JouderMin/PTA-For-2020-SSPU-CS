#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int isPrimer(int a) {
    int t = 5;

    if (a < 2) {
        return false;
    }
    if (a == 2 || a == 3) {
        return true;
    }
    if (a % 2 == 0 || a % 3 == 0) {
        return false;
    }
    while (t <= sqrt((double)a)) {
        if (a % t == 0 || a % (t + 2) == 0) {
            return false;
        }
        t += 6;
    }
}

int main(void) {
    int num[11], n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++) {
        if (isPrimer(num[i])) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
