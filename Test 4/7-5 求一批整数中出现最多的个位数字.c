#include <stdio.h>

int main(void) {
    int n, a[1000], i, s, m, max, k = 0, t = 0;
    static int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9;
    int b[10], c[10];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] != 0) {
            s = a[i];
            while (s != 0) {
                m = s % 10;
                switch (m) {
                case 0:
                    n0++;
                    break;
                case 1:
                    n1++;
                    break;
                case 2:
                    n2++;
                    break;
                case 3:
                    n3++;
                    break;
                case 4:
                    n4++;
                    break;
                case 5:
                    n5++;
                    break;
                case 6:
                    n6++;
                    break;
                case 7:
                    n7++;
                    break;
                case 8:
                    n8++;
                    break;
                case 9:
                    n9++;
                    break;
                }
                s /= 10;
            }
        } else if (a[i] == 0) {
            n0++;
        }
    }
    b[0] = n0;
    b[1] = n1;
    b[2] = n2;
    b[3] = n3;
    b[4] = n4;
    b[5] = n5;
    b[6] = n6;
    b[7] = n7;
    b[8] = n8;
    b[9] = n9;
    max  = b[0];
    for (i = 1; i < 10; i++) {
        if (b[i] > max) {
            max = b[i];
            k   = i;
        }
    }
    for (i = 0; i < 10; i++) {
        if (b[i] == b[k]) {
            c[t] = i;
            t += 1;
        }
    }
    printf("%d:", max);
    for (i = 0; i <= t - 1; i++) {
        printf(" %d", c[i]);
    }

    return 0;
}
