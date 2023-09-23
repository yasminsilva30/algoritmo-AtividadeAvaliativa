#include<stdio.h>

main() {

    int a, b, c;

    printf("Digite tres numeros: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
      printf("\n Os tres valores que voce informou formam um triangulo");
        
        if (a == b && a == c) {
            printf("\n Este eh um triangulo acutangulo");
        } else if (a == b || a == c || b == c) {
            printf("\n Este eh um triangulo retangulo");
        } else if (a != b && a != c || b != c) {
            printf("\n Este eh um triangulo obtusangulo");
        }
        
    } else {
        printf("\n Os tres valores que voce informou nao formam um triangulo :( ");
    }
}