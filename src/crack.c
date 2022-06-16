#include <stdio.h>

int main() {
    double x, y;
    char fail;

    scanf("%lf %lf", &x, &y);
    scanf("%c", &fail);

    if ((fail != '\0') && (fail != '\n')) {
        printf("n/a\n");
        return 0;
    } else {
        if ((x * x + y * y) <= 25.0) {
        printf("GOTCHA\n");
        } else {
            printf("MISS\n");
        }
    }
    return 0;
}
