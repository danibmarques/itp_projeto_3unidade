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


