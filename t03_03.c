// 12S23050 - YOLANDA SEPTANIA SARAGIH

#include <stdio.h>
#include <stdlib.h> // Mengandung fungsi abs()

int main() {
    int n;
    scanf("%d", &n);

    int min = 101;
    int max = -101;
    int total = 0; // Mengganti variabel y menjadi total
    int max_m = 0;
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

        // Menambahkan nilai ke dalam total sum
        total += x;

        int diff = abs(x - prev_x); // Menggunakan x dan prev_num
        if (diff > max_m) {
            max_m = diff;
        }

        // Mengupdate nilai sebelumnya
        prev_x = x;
    }

    // Menampilkan nilai terkecil, terbesar, rata-rata, dan jarak terjauh
    printf("%d\n%d\n%.2f\n%d\n", min, max, (float)total / n, max_m);

    return 0;
}
