#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    int i, A1max = 0, A2num = 0, t, n = 0;
    double A3ave = 0.0;

    for (i = 0; i < N; i++) {
        scanf("%d", &t);
        if (t % 3 == 0) {
            if (t > A1max) {
                A1max = t;
            }
        } else if (t % 3 == 1) {
            A2num++;
        } else {
            A3ave = A3ave + t;
            n++;
        }
    }
    if (A1max == 0) {
        printf("NONE");
    } else {
        printf("%d", A1max);
    }
    if (A2num == 0) {
        printf(" NONE");
    } else {
        printf(" %d", A2num);
    }
    if (A3ave == 0) {
        printf(" NONE");
    } else {
        printf(" %.1lf", A3ave / n);
    }

    return 0;
}
