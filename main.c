#include <stdio.h>
/*
  obter notas do aluno
  calcular media
  verificar se o aluno foi reprovado ou não
  se a media for >= 7 aprovado
  senão reprovado
*/
int main(void) {
  //declaração de variáveis
  float nota1, nota2, nota3, nota4, media;

  //obter as notas
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1); 

  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  printf("Digite a primeira nota: ");
  scanf("%f", &nota3); 

  printf("Digite a segunda nota: ");
  scanf("%f", &nota4);

  //calcula a media
    media = (nota1 + nota2 + nota3 + nota4)/4;

  //verificar se foi aprovado ou não
    if(media >= 7)
    printf("Aprovado");
  else
    printf("Reprovado");

  return 0;
}