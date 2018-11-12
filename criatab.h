#ifndef CRIATAB_H_INCLUDED
#define CRIATAB_H_INCLUDED

typedef struct tabela{
  char* nome;
  char** campos;
  char** tipos;
}Tabela;

Tabela* criar_tab(void);
#endif // CRIATAB_H_INCLUDED
