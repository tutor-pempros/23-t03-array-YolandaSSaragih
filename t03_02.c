// 12S23050 - YOLANDA SEPTANIA SARAGIH

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int min = 101;
    int max = -101;
    int y = 0;
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

        // Meenambahkan nilai kedlm y
        y += x;
    }
    printf("%d\n%d\n%.2f\n", min, max, (float)y / n);

    return 0;
}
