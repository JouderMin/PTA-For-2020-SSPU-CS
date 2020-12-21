#include <stdio.h>
#include <string.h>

int main(void) {
    int num;
    char max[81], temp[81] = {0};

    scanf("%d\n", &num);
    gets(max);
    for (int i = 0; i < num - 1; i++) {
        gets(temp);
        if (strlen(max) < strlen(temp)) {
            strcpy(max, temp);
        }
        strcpy(temp, "\0");
    }
    printf("The longest is: %s", max);

    return 0;
}
