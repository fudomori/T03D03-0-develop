#include <stdio.h>

int main() {
    int a, b;
    char fail;

    scanf("%d %d", &a, &b);
    scanf("%c", &fail);

    if ((fail != '\0') && (fail != '\n')) {
        printf("n/a\n");
        return 0;
    } else {
        if (a > b) {
            printf("%d\n", a);
        } else {
            printf("%d\n", b);
        }
    }
    return 0;
}
