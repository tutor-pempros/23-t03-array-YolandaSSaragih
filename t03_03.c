// 12S23050 - YOLANDA SEPTANIA SARAGIH

#include <stdio.h>
#include <stdlib.h> // Mengandung fungsi abs()

int main() {
    int n;
    scanf("%d", &n);

    int min = 101;
    int max = -101;
    int total = 0;
    int max_y = 0;
    int x;
    int prev_x;
    //nilai pertama
    scanf("%d", &prev_x);

    for (int i = 1; i < n; i++) {
        scanf("%d", &x);

        // nilai terkecil
        if (x < min) {
            min = x;
        }

        // nilai terbesar
        if (x > max) {
            max = x;
        }
        total += x;

        int diff = abs(x - prev_x);
        if (diff > max_y) {
      max_y = max_y;
        }
        prev_x = x;
    }

    printf("%d\n%d\n%.2f\n%d\n", min, max, (float)total / n, max_y);

    return 0;
}
