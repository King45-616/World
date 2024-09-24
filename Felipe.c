#include <stdio.h>

int main(void) {
int a = 11, b = 10;
 
int soma = a + b;
printf("soma de %d e %d é %d\n", a, b, soma);
 
int subtracao = a - b;
printf("subtracao de %d e %d é %d\n", a, b, subtracao);
 
int mult = a * b;
printf("multiplicação de %d e %d é %d\n", a, b, mult);
 
int divisao = a / b;
printf("divisao de %d e %d é %d\n", a, b, divisao);
 
int mod = a % b;
printf("resto da divisão de %d e %d é %d\n", a, b, mod);
   
a++;
printf("incremento: %d\n", a);
   
b--;
printf("decremento: %d\n", b);
 
 //Igualdade
int resultado = (a == b);
printf("%d == %d é %d\n", a, b, resultado);
//Diferença
resultado = (a != b);
printf("%d != %d é %d\n", a, b, resultado);
//Maior
resultado = (a > b);
printf("%d > %d é %d\n", a, b, resultado);
//Menor
resultado = (a < b);
printf("%d < %d é %d\n", a, b, resultado);
//Maior ou igual
resultado = (a >= b);
printf("%d >= %d é %d\n", a, b, resultado);
//Menor ou Igual
resultado = (a <= b);
printf("%d <= %d é %d\n", a, b, resultado);

//AND (E)
resultado = (a && b);
printf("%d && %d é %d\n", a, b, resultado);

//OR (OU)
resultado = (a || b);
printf("%d || %d é %d\n", a, b, resultado);

//NOT (NÃO)
resultado = !a;
printf("!%d é %d\n", a, resultado);
//Combinação de operadores lógicos
resultado = (a && b) || !a;
printf ("(%d && %d) || !%d é %d\n", a, b, a, resultado);

return 0;
}