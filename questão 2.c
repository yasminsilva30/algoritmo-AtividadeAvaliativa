#include <stdio.h>

main() {
    
    float chico = 1.5, ze = 1.1;
    int ano = 0;

    while (chico >= ze) {
      
        chico += 0.02;
        ze += 0.03;
        ano++;
      
        printf("Chico: %.2f Ze: %.2f Ano: %d \n", chico, ze, ano);
    }

    printf("\n Serao necessarios %d anos para que Ze seja maior que Chico", ano);

}