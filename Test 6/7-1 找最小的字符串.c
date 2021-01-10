#include <stdio.h>
#include <string.h>

int main(void) {
    int num;
    char min[81], temp[81] = {0};

    scanf("%d\n", &num);
    gets(min);
    for (int i = 0; i < num - 1; i++) {
        gets(temp);
        if (strcmp(min, temp) >= 0) {
            strcpy(min, temp);
        }
        strcpy(temp, "\0");
    }
    printf("Min is: %s", min);

    return 0;
}
