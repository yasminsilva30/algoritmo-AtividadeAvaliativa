#include <stdio.h>

main() {

    float salario, mediaSalarios = 0, habitantes = 0, somaSalarios = 0, maiorSalario = 0, salarioAte100 = 0, percentual = 0;

    int numeroFilhos,totalFilhos = 0, mediaFilhos = 0;

    do {  
        printf("Informe o salario: \n");
        scanf("%f", &salario);
        habitantes += 1;
        somaSalarios = salario + somaSalarios;
        mediaSalarios = somaSalarios / habitantes;

        if (maiorSalario < salario) {
            maiorSalario = salario; 
        } else if (salario <= 100) {
            salarioAte100 = salario;
            percentual = (salarioAte100 * 100) / habitantes; 
        }    
    
        printf("Informe a quantidade de filhos: ");
        scanf("%d", &numeroFilhos);
        totalFilhos = numeroFilhos + totalFilhos;
        mediaFilhos = totalFilhos / habitantes;

    } while (salario > -100);

    printf("\n\n A media dos salarios eh de: R$ %.2f \n",mediaSalarios);
    printf("\n Media do numero de filhos: %d \n",mediaFilhos); 
    printf("\n O maior salario eh: R$ %.2f \n", maiorSalario); 
    printf("\n Percentual de pessoas com salarios ate R$100.00: %.0f %%\n", percentual);

    return 0;

}