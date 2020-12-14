#include <stdio.h>

int main(void) {
    char x;
    char zfc[100];
    int index, i, flag = 0;

    scanf("%c", &x);
    getchar();
    gets(zfc);
    for (i = 0; zfc[i] != '\0'; i++) {
        if (zfc[i] == x) {
            flag  = 1;
            index = i;
        }
    }
    if (flag == 1) {
        printf("index = %d", index);
    } else {
        printf("Not Found");
    }
    return 0;
}
