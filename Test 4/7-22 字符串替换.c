#include <stdio.h>
#include <string.h>

int main(void) {
    int l, i;
    char s[85];

    gets(s);
    l = strlen(s);
    for (i = 0; i < l; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = 'A' + 'Z' - s[i];
    puts(s);

    return 0;
}
