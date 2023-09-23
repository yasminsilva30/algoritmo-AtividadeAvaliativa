#include<stdio.h>
#include<math.h>

main() {

  double x = 0, resultado;

  printf("Insira o valor de x");
  scanf("%lf", &x);

  resultado = (5 * x + 3) / sqrt (pow (x, 2) - 16);

  printf("%lf", resultado);

}