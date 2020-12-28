#include <stdio.h>

struct staff {
    char name[11];
    double basic, flow, out;
};

int main(void) {
    int n;
    double money;
    scanf("%d", &n);
    struct staff staff[n];

    for (int i = 0; i < n; i++) {
        scanf("%10s %lf %lf %lf", staff[i].name, &staff[i].basic, &staff[i].flow, &staff[i].out);
    }
    for (int i = 0; i < n; i++) {
        money = staff[i].basic + staff[i].flow - staff[i].out;
        printf("%s %.2f\n", staff[i].name, money);
    }

    return 0;
}
