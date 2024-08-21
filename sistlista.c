#include "lista.h"

int main(){
    Lista* l;
    l = lst_cria();
    l = lst_insere(l, 23);
    l = lst_insere(l, 45);
    l = lst_insere(l, 67);
    l = lst_insere(l, 89);
    l = inserir_final(l, 100);
    lst_imprime(l);
    remover_final(l);
    lst_imprime(l);
    lst_libera(l);
    return 0;
}