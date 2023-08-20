#include <stdio.h>

main() {

  char nome[200];
  int idade;
  char matricula[20];
  char endereço[40];
  char curso[40];
  int periodo;
  char disciplina[100];
  float mensalidade;

  // segundo passo - entrada de dados
  printf("Nome: \n");
  fgets(nome, 200, stdin);

  printf("Idade: \n");
  scanf("%d",&idade);
  __fpurge(stdin);

  printf("Digite a matricula: \n");
  fgets(matricula, 20, stdin);
  //__fpurge(stdin);

  printf("Digite o endereço: \n");
  fgets(endereço, 40, stdin);

  printf("Digite o curso: \n");
  fgets(curso, 40, stdin);

  printf("Digite o periodo: \n");
  scanf("%d",&periodo);
  __fpurge(stdin);

  printf("Digite suas disciplinas: \n");
  fgets(disciplina, 100, stdin);

  printf("Digite sua mensalidade: \n");
  scanf("%f",&mensalidade);
  __fpurge(stdin);
  
  //mostram os dados

  printf("Conferência de dados\n");

  printf("Nome:%s",nome);
  printf("\nIdade:%d",idade);
  printf("\nMatricula:%s",matricula);
  printf("\nEndereço:%s",endereço);
  printf("\nCurso:%s",curso);
  printf("\nPeriodo:%d",periodo);
  printf("\nDisciplina:%s",disciplina);
  printf("\nMensalidade:%.2f",mensalidade);
  
}