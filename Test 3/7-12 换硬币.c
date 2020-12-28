#include <stdio.h>

int main(void) {
    int x, b, c, d, i, m, yue, jishu = 0;

    scanf("%d", &x);
    x = x - 8;
    b = x / 5;
    for (i = b; i >= 0; i--) {
        c = x - 5 * i;
        d = c / 2;
        for (m = d; m >= 0; m--) {
            yue = x - 5 * i - 2 * m;
            printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", i + 1, m + 1, yue + 1, i + m + yue + 3);
            jishu++;
        }
    }
    printf("count = %d", jishu);

    return 0;
}
