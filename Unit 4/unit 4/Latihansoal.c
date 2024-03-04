#include <stdio.h>

float kelilingPersegi (float sisi){
    return 4*sisi;
}

float luasPersegi (float sisi){
    return sisi*sisi;
}

float volumekubus (float sisi){
    return sisi*sisi*sisi;
}

float sisi;

int main() {

    printf("masukkan panjang sisi : ");
    scanf("%f", &sisi);

    float keliling =kelilingPersegi(sisi);
    float luas =luasPersegi(sisi);
    float volume =volumekubus(sisi);

    printf("keliling persegi : %f\n",keliling);
    printf("Luas persegi :%f\n", luas );
    printf("volume kubus : %f\n", volume);

    return 0;
}