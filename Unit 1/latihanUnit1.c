#include <stdio.h>

int main(){
    int jarak, waktu, kecepatan;

    //menghitung kecepatan
    printf("Masukkan nilai jarak dan waktu:  ");
    scanf("%d %d", &jarak, &waktu);
    float v = (float) jarak / waktu;

    //menghitung jarak
    printf("masukkan nilai kecepatan dan waktu: ");
    scanf("%d %d", &kecepatan, &waktu);
    float s = (float) kecepatan * waktu;

    //menghitung waktu
    printf("masukkan nilai jarak dan kecepatan : ");
    scanf("%d %d", &jarak, &kecepatan);
    float t = (float) jarak / kecepatan;

    //keluaran hasil
    printf("%.2f\n", v);
    printf("%.2f\n", s);
    printf("%.2f\n", t);

    return 0;
}