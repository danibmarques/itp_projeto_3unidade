#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct tabela{
  char* nome;
  char** campos;
  char** tipos;
}Tabela;

int main(void) {
  char p = 'n';
  int n_t,i;
  FILE *arquivo = fopen( "sgbd.txt", "w" );
  if( arquivo == NULL ){
      printf( "Erro na abertura do arquivo" );
  }else{
  while(p != 's'){
    printf("Deseja criar uma nova tabela ?(s ou n)");
    scanf("%c", &p);
    printf("Quantas tabelas deseja criar ?");
    scanf(" %i", &n_t);
    Tabela tabelas[n_t];

    for(i=0; i<n_t; i++){
      tabelas[i]=criar_tab;
     fprintf(arquivo, "%s", tabelas);
    }
  }
  fclose(arquivo);
  }

  return 0;
}




Tabela* criar_tab(void){
  int nt,i,qt;
  char nomet [20];
  //armazena temporiamente o nome da coluna
  char coluna[21];
  //armazena temporiamente o nome do tipo
  char t[8];
  Tabela *tab;
  tab = malloc(sizeof(Tabela)*1);
  printf("Qual será o nome da tabela %i ?", i+1);
  scanf(" %s", nomet);
  printf("Quantas colunas terá a tabela %i", i+1);
  scanf(" %i", &qt);
  //aloca uma string para o nome e atribui o valor dado pelo usuário
  tab->nomes = malloc(sizeof(char)*20);
  tab->nomes = nomet;
  //aloca um vetor de strings para os campos(colunas)
  tab->campos = malloc(sizeof(*char)*qt);
  //aloca um vetor de strings para os tipos(tipo da variável)
  tab->tipos = malloc(sizeof(*char)*qt);
  //define o tamanho que cada string terá
  for(i=0; i<qt; i++){
    tab->campos[i] = malloc(sizeof(char)*21);
    tab->tipos[i] = malloc(sizeof(char)*8);
  }
  
  for(i=0; i<qt; i++){
    for(j=0;j<21;j++){   
    printf("Qual será o nome da coluna ?");
    scanf("%s", &coluna);
    nt = strlen(coluna);
    if(nt<=0){
      printf("Erro, nome da coluna é inválido.");
    } else {
        tab->campos[i][j]=coluna;
    } 
     printf("Qual será o tipo dessa coluna ?");
     scanf("%s", &tipo);
    
  }
  }

  
  return n;
}
