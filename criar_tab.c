#include<criar_tab.h>

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
  tab->campos = malloc(sizeof(char)*qt);
  //aloca um vetor de strings para os tipos(tipo da variável)
  tab->tipos = malloc(sizeof(char)*qt);
  //define o tamanho que cada string terá

  for(i=0; i<qt; i++){
    tab->campos[i] = malloc(sizeof(char)*21);
    tab->tipos[i] = malloc(sizeof(char)*8);
  }

for(i=0; i<qt; i++){
    //t_c tamanho da coluna
    // t_t tamanho do tipo
    int t_c,t_t;
    if(i==0){
      printf("Qual será o nome da coluna principal(chave primaria)?\n")
      scanf("%s", &coluna);
      //obtem o tamanho da string coluna
      t_c = strlen(coluna);
      strcpy(t,"int");
      //obtem o tamanho da string tipo
      t_t = strlen(t);
      //verifica se o tamanho das strings para coluna e tipo maiores que 0
      if(t_c<=0 || t_t<=0){
      printf("Nome da coluna ou do tipo é pequeno demais.\n");
    } else {
      tab->campos[i]=coluna;
      tab->tipos[i]=t;
      }
    } else {
    printf("Qual será o nome da coluna ?\n");
    scanf("%s", &coluna);
    //obtem o tamanho da string coluna
    t_c = strlen(coluna);
    printf("Qual será o tipo da coluna ?\n");
    scanf("%s", &t);
    //obtem o tamanho da string tipo
    t_t = strlen(t);
    if(t_c<=0 || t_t<=0){
      printf("Nome da coluna ou do tipo é pequeno demais.\n");
    } else {
      tab->campos[i]=coluna;
      tab->tipos[i]=t;
    }
  }
  }


  return tab;
}
