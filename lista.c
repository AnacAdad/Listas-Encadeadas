#include "lista.h"
#include <stdlib.h>
#include <stdio.h>


Lista* lst_cria(void){
    return NULL;
}

Lista* lst_insere(Lista* l, int i){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->valor = i;
    novo->prox = l;
    return novo;
}

Lista* inserir_final(Lista* l, int i){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->valor = i;
    novo->prox = NULL;
    if (l == NULL)
    {
        return novo;
    }
    Lista* p;
    for (p = l; p->prox != NULL; p = p->prox)
    {
        p->prox = novo;
    }
    return l;
}

void remover_final(Lista* l){
    Lista* p;
    Lista* t;
    p = l;
    while (p->prox != NULL)
    {
        t = p;
        p = p->prox;
    }
    t->prox = NULL;
    free(p);
}

void lst_imprime(Lista* l){
    Lista* p;
    for (p = l; p != NULL; p = p->prox)
    {
        printf("info = %d\n", p->valor);
    }
}

void lst_libera(Lista* l){
    Lista* p;
    Lista* t;
    p = l;
    while (p != NULL)
    {
        t = p->prox;
        free(p);
        p = t;
    }
}

int main(void)
{
    Lista* l;
    l = lst_cria();
    l = lst_insere(l, 23);
    l = lst_insere(l, 45);
    l = lst_insere(l, 56);
    lst_imprime(l);
    lst_libera(l);
    return 0;
}
  
   