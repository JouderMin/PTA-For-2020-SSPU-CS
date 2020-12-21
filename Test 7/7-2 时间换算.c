#include <stdio.h>

struct time {
    int hour;
    int min;
    int sec;
};

int main(void) {
    struct time times;
    int n;

    scanf("%d:%d:%d", &times.hour, &times.min, &times.sec);
    scanf("%d", &n);
    times.sec += n;
    while (times.hour >= 24 || times.min >= 60 || times.sec >= 60) {
        if (times.sec >= 60) {
            times.min++;
            times.sec -= 60;
        }
        if (times.min >= 60) {
            times.hour++;
            times.min -= 60;
        }
        if (times.hour >= 24) {
            times.hour -= 24;
        }
    }

    printf("%02d:%02d:%02d\n", times.hour, times.min, times.sec);

    return 0;
}
