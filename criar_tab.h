#ifndef CRIAR_TAB_H_INCLUDED
#define CRIAR_TAB_H_INCLUDED

typedef struct tabela{
  char* nome;
  char** campos;
  char** tipos;
}Tabela;

Tabela* criar_tab(void);

#endif // CRIAR_TAB_H_INCLUDED
