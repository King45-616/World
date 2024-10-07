#include <stdio.h>

 int main() {
int peso=22;
float altura=1.60;
float alturaa = altura * altura;
printf("multiplicacao de %f e %f sera %f", altura, altura, alturaa);
float imc= peso / alturaa;
printf(" e a divisao de %d e %f sera %f", peso, alturaa, imc);

 return 0;
}