#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) { // program ini akan berjalan selama i kurang dari atau sama dengan 3//
        printf("Bilangan utama: %d\n", i); // dimana nnti akan mencetak bilangan utama (i)//
        
        while (j <= 2) { // program ini akan berjalan selama j kurang dari atau sama dengan 2//
            printf(" Bilangan pengali: %d\n", j); // dimana nnti akan mencetak bilangan pengali (j)//
            printf("  Hasil perkalian: %d\n\n", j * i); // akan mencetak hasil perkalian (j*i)//
            j++; 
        }

        i++;
        j = 1;
    }

    return 0;
}
