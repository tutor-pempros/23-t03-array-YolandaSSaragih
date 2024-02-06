// 12S23050 - YOLANDA SEPTIANIA SARAGIH

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int min = 101;
    int max = -101;
    int x;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);

        // nilai terkecil
        if (x < min) {
            min = x;
        }

        // nilai terbesar
        if (x > max) {
            max = x;
        }
    }

    printf("%d\n%d\n", min, max);

    return 0;
}
