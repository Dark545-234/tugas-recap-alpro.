#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Halo %s", fullname);
    return 0;
}
//Dapatkah kamu menemukan perbedaan output dari kedua program tersebut? Jika iya, coba jelaskan apa perbedaannya
//Ketika terdapat string pada code, gunakanlah fungsi scanf() untuk membaca satu buah kata pada teks dan fungsi fgets() untuk membaca satu baris teks.