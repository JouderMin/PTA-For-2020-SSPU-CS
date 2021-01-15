#include <stdio.h>

int main(void) {
    int sec, min, hor, n;

    scanf("%d:%d:%d", &hor, &min, &sec);
    scanf("%d", &n);
    sec += n;
    while (hor >= 24 || min >= 60 || sec >= 60) {
        if (sec >= 60) {
            min++;
            sec -= 60;
        }
        if (min >= 60) {
            hor++;
            min -= 60;
        }
        if (hor >= 24) {
            hor -= 24;
        }
    }
    printf("%02d:%02d:%02d", hor, min, sec);

    return 0;
}
