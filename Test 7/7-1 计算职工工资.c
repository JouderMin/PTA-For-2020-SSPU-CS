#include <stdio.h>

struct cast {
    char name[11];
    float basic;
    float flow;
    float out;
};

float getTrue(struct cast a) {
    return a.basic + a.flow - a.out;
}

int main(void) {
    int num;
    scanf("%d", &num);
    struct cast menber[num];

    for (int i = 0; i < num; i++) {
        scanf("%10s %f %f %f", menber[i].name, &menber[i].basic, &menber[i].flow, &menber[i].out);
    }
    for (int i = 0; i < num; i++) {
        printf("%s %.2f\n", menber[i].name, getTrue(menber[i]));
    }

    return 0;
}
