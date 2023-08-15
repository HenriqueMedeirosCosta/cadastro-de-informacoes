#include <stdio.h>

int main(){
  printf("Cadastro de Usuário\n");
  char nome[100];
  int idade[10];
  char matricula[30];
  char endereço [50];
  char curso[40];
  int período[30];
  char disciplinas[200];
  float mensalidade[20];


 printf("Digite o nome:\n");
  fgets(nome,100,stdin);  
  printf("digite sua idade:\n");
  fgets(idade,10,stdin);
printf("Digite sua matricula:\n");
  fgets(matricula,30,stdin);
printf("Digite seu endereço:\n");
fgets(endereço,50,stdin);
printf("Digite seu Curso:\n");
fgets(curso,40,stdin);
printf("Digite seu período:\n");
fgets(período,30,stdin);
printf("Digite suas disciplinas\n");
fgets(disciplinas,200,stdin);
printf("Valor da mensalidade:\n");
fgets (mensalidade,20,stdin);

} 

