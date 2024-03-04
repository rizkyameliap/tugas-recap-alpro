#include<stdio.h>

int main() {
    int jumlahElemen,i;
    printf("Masukkan jumlah elemen pada array : ");
    scanf("%d", &jumlahElemen);

    int array[jumlahElemen];

    printf("Masukkan nilai setiap elemen :\n");
    for (i=0; i<jumlahElemen; i++){
        printf("elemen %d: ",i+1);
        scanf("%d", &array[i]);
    }

    int total = 0;
    for (i=0;i<jumlahElemen;i++){
        total += array[i];
    }

    printf("Hasil penjumlahan seluruh elemen pada array : %d\n",total);

    return 0;
}