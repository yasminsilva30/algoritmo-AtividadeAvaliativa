#include <stdio.h>

main() {

    double x, y;
    printf("Insira dois valores: \n");
    scanf("%lf %lf", &x, &y);

    if (x == 0.0 && y == 0.0) { 
        printf("Origem");
    } else if (x > 0 && y > 0) {
        printf("Q1");
    } else if (x < 0 && y > 0) {
        printf("Q2");
    } else if (x < 0 && y < 0) {
        printf("Q3");
    } else if (x > 0 && y < 0) {
        printf("Q4");
    } else if (x == 0) {
        printf("Eixo Y");
    } else if (y == 0) { 
        printf("Eixo X"); 
    }

}