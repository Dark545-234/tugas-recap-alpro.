#include <stdio.h>

int keliling(int sisi){
    return sisi * 4;
}

int luas(int sisi){
    return sisi * sisi;
}

int volume(int sisi){
    return sisi * sisi * sisi;
}

int main(){
    int sisi;
    printf("Masukan panjang sisi : ");
    scanf("%d", &sisi);

    printf("Keliling persegi : %d\n", keliling(sisi));
    printf("luas persegi : %d\n", luas(sisi));
    printf("volume kubus : %d", volume(sisi));

    return 0;
}