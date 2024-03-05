#include <stdio.h>

int main(){
    int JumlahElemen;

    printf("masukan jumllah elemen: ");
    scanf("%d", &JumlahElemen);

    int total = 0, arr[JumlahElemen];
    for (int i = 0; i < JumlahElemen; i++)
    {
        printf("nilai elemen ke %d : ",i+1);
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    
    printf("Hasil penjumlahan seluruh elemen pada array adalah %d", total);

    return 0;
}