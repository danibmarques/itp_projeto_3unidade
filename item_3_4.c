#include <stdio.h>
#include <stdlib.h>
//#include "criatab.h"

typedef struct array{
    int key;
    char nome[50];
    char dados[100];
}vet;	//CRIEI UMA STRUCT QUALQUER PARA PODER PREENCHER OS DADOS DA TABELA COM INFORMAÇÕES. ENTENDI QUE O BD É UM VETOR DE STRUCTS. NÃO CONSEGUI DE OUTRA FORMA.


int main(){

//PREENCHER BD. CADA LINHA É UMA POSIÇÃO DO VETOR. CADA POSIÇÃO TEM DADOS EM FORMATO DO STRUCT;

int n_lins, i;
printf("Quantas linhas tem a tabela?");
scanf("%d",&n_lins);

vet tabdados[n_lins];

FILE *tab = fopen("tab.txt","w");

if (tab == NULL){
    printf("Erro");
}else{

// AQUI ESTOU SOLICITANDO PARA O USUÁRIO PREENCHER OS DADOS DA TABELA
for (i = 0; i<n_lins; i++){
    printf(" Digite a chave: ");
    scanf("%d%*c", &tabdados[i].key);
    printf(" Digite o nome: ");
    gets(tabdados[i].nome);
    printf(" Digite o dado: ");
    gets(tabdados[i].dados);
}

// MOSTRANDO NA TELA OS DADOS
for(i=0; i<n_lins; i++) {
    printf(" \n A chave eh: %d ", tabdados[i].key);
    printf(" \n O nome eh: %s ", tabdados[i].nome);
    printf(" \n Os dados sao: %s ", tabdados[i].dados);
    printf("\n");

// SALVANDO NO ARQUIVO TXT OS DADOS DIGITADOS
    fprintf(tab, " \n A chave eh: %d ", tabdados[i].key);
    fprintf(tab," \n O nome eh: %s ", tabdados[i].nome);
    fprintf(tab," \n Os dados sao: %s ", tabdados[i].dados);
    //fprintf("\n");
}

}
char dec;
//ITEM DO PROJETO QUE PEDE PARA ADICIONAR LINHA NA TABELA
printf("\nDeseja adicionar linhas?");
scanf("%c", &dec);
if (dec == 's'){
    n_lins = n_lins + 1;
    printf(" Digite a chave: ");
    scanf("%d%*c", &tabdados[n_lins].key);
    printf(" Digite o nome: ");
    gets(tabdados[n_lins].nome);
    printf(" Digite o dado: ");
    gets(tabdados[n_lins].dados);

   for(int j=0; j<n_lins; j++) {
    printf(" \n A chave eh: %d ", tabdados[j].key);
    printf(" \n O nome eh: %s ", tabdados[j].nome);
    printf(" \n Os dados sao: %s ", tabdados[j].dados);
    printf("\n");
}

}else{
    return 0;
    };

return 0;
}







