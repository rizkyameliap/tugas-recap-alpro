#include <stdio.h>

char fullname[30];
// pada percobaan 5a menampilkan nama panjang hanya pada bagian nama depannya saja //
int main(){
    printf("Masukan nama lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Halo %s", fullname);
    return 0;
}