# include <stdio.h>

int main() {
int JumlahTransaksi;
int NominalTransaksi;
int Totalpengeluaran;

scanf("%d", &JumlahTransaksi);

if(JumlahTransaksi <= 0) {
    printf("Tidak ada transaksi hari ini \n");
} else {
    for (int i=0; i<JumlahTransaksi; ++i){
        scanf("%d", &NominalTransaksi);
        Totalpengeluaran += NominalTransaksi;
    } printf ("Total Pengeluaran Hari ini : %d\n", Totalpengeluaran);
}
return 0;
}
