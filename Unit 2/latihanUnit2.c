#include <stdio.h>

int main(){
    int JumlahTransaksi;
    printf("masukan jumlah transaksi hari ini : ");
    scanf("%d", &JumlahTransaksi);

    if (JumlahTransaksi <= 0)
    {
        printf("Tidak ada transaksi hari ini");
    }
    else{
        int nominal, total = 0, i = 1;
        while (i <= JumlahTransaksi)
        {
            printf("masukan nominal transaksi ke %d : ", i);
            scanf("%d", &nominal);
            total += nominal;
            i++;
        }
        
        printf("Total pengeluaran hari ini : %d", total);

    }
    return 0;
}