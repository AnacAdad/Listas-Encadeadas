struct lista
{
    int valor;
    struct lista* prox;
};
typedef struct lista Lista;

Lista* lst_cria(void);
Lista* lst_insere(Lista* l, int i);
Lista* inserir_final(Lista* l, int i);
void remover_final(Lista* l);
void lst_imprime(Lista* l);
void lst_libera(Lista* l);


