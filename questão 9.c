#include <stdio.h>

main () {
  
    int Finn = 0, Jake = 0, Bonnie = 0, Marceline = 0, nulo = 0, branco = 0, voto, continuar;

    do {
        printf("Deseja votar? 1 - Sim e 0 - Nao");
        scanf("%d", &continuar);
    
        printf("Digite 1 - Finn \n 2 - Jake \n 3 Bonnie \n 4 - Marceline \n 5 - nulo \n 6 - branco");
        scanf("%d", &voto);
    
        if (voto == 1) { 
            Finn++;
        } else if (voto == 2) {
            Jake++;
        } else if (voto == 3) {
            Bonnie++;
        } else if (voto == 4) {
            Marceline++;
        } else if (voto == 5) {
            branco++;
        } else if (voto == 6) {
            nulo++;
        }
    
    } while (continuar == 0);

    fflush(stdin);
    printf("Resultado da votacao!");
    printf("\n O candidato Finn teve um total de %d votos", Finn);
    printf("\n O candidato Jake teve um total de %d votos", Jake);
    printf("\n A candidata Bonnie teve um total de %d votos", Bonnie);
    printf("\n A candidata Marceline teve um total de %d votos", Marceline);
    printf("\n Houveram um total de %d votos nulos e %d votos brancos", nulo, branco);

}