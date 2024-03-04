#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) { // akan mencetak bilangan utama (i) dimana i adalah bilangan 2 dan 3//
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) { // akan mencetak bilangan pengali (j) dimana J adalah bilangan 1 dan 2//
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i); // akan mencetak hasil perkalian dari j*i yang mana nnti akan akan menghasilkan 2 hasil disetiap bilangan utama//
            }
        
    }

    return 0;
}