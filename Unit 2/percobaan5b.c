#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}
//program akan berjalan dengan pengeluaran Bilangan utama yaitu dua di baris pertama, bilangan pengali di baris kedua, dan terakhir hasil perkalian antar keduanya di baris ketiga. ini akan berulang hingga kondisinya terpenuhi