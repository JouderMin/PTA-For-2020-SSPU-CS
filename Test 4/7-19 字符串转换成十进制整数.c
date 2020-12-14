#include <stdio.h>

int main(void) {
    char a[100], b[100];
    int i = 0, flag = 1, f = 1, n = 0, sum = 0;

    gets(a);
    while (a[i] != '#') {
        if (a[i] == '-' && flag == 1) {
            f = -1;
        }
        if ((a[i] >= '0' && a[i] <= '9') || (a[i] >= 'a' && a[i] <= 'f') || (a[i] >= 'A' && a[i] <= 'F')) {
            b[n] = a[i];
            n++;
            flag = 0;
        }
        i++;
    }
    for (i = 0; i < n; i++) {
        if (b[i] >= '0' && b[i] <= '9') {
            sum += (b[i] - 48) * pow(16, n - 1 - i);
        } else if (b[i] >= 'A' && b[i] <= 'F') {
            sum += (b[i] - 55) * pow(16, n - 1 - i);
        } else {
            sum += (b[i] - 87) * pow(16, n - 1 - i);
        }
    }
    printf("%d", f * sum);

    return 0;
}
