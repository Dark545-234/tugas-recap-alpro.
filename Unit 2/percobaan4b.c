#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}
//program akan berjalan berawal dari printf dari bilangan utama yaitu dua pada baris pertama. kemudian baris kedua akan memunculkan Bilangan pengali yang berawal dari angka 1, dan baris terakhir akan mengeluarkan hasil perkalian dua inputan diatas. program akan berulang sebanyak kurang dari sama dengan 3 untuk i dan 2 untuk j , yang masing - masing variabelnya akan bertambah satu