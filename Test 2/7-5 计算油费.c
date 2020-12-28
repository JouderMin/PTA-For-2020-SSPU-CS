#include <stdio.h>

int main(void) {
    int a, b;
    float i, j, s;
    char c;

    scanf("%d %d %c", &a, &b, &c);
    switch (b) {
    case 90:
        i = 6.95;
        break;
    case 93:
        i = 7.44;
        break;
    case 97:
        i = 7.93;
        break;
    }
    switch (c) {
    case 'm':
        j = 0.95;
        break;
    case 'e':
        j = 0.97;
        break;
    }
    s = a * i * j;
    printf("%.2f", s);

    return 0;
}
