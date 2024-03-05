#include <stdio.h>

int main() {
    int i = 2, j;

    do {
        printf("Bilangan utama: %d\n", i);
        j = 1;
        
        do {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        } while (j <= 2);

        i++;
    } while (i <= 3);

    return 0;
}
//program akan berjalan dengan pengeluaran Bilangan utama yaitu dua di baris pertama, bilangan pengali di baris kedua, dan terakhir hasil perkalian antar keduanya di baris ketiga. program ini akan bekerja terlebih dahulu , kemudian akan berulang hingga kondisinya terpenuhi
//kerja masing - masing varian :
//for loop digunakan ketika jumlah iterasi sudah diketahui, sedangkan while loop akan mengeksekusi secara terus menerus hingga pernyataan dalam program terbukti salah