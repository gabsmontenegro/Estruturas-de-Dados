/* ********************************
1) Baixe o arquivo listas.c e 
implemente a função "igual", que compara duas listas encadeadas e
retorna 1 se forem iguais e 0 caso contrário.


*************************************************/

#include "stdio.h"
#include "stdlib.h"


typedef struct tNo
{
    int dado;
    struct tNo *prox;
} tNo;

typedef struct tLista
{
    int tam;
    tNo *prim;
} tLista;


/* Prototipo das funcoes */
void criaLista(tLista *l);
int listaVazia(tLista l);
tNo *busca(tLista lista, int d);
void insereInicio(tLista *lista, int novoDado);
tLista *remNo(tLista *l, int d);
int listasIguais(tLista *l1, tLista *l2);

/* Funcao Principal*/
int main()
{
    
    return 0;
}



/* Definicao de funcoes */
int listasIguais(tLista *l1, tLista *l2)
{
    
    return 0;

}
void criaLista(tLista *l)
{
    l->tam = 0;
    l->prim = NULL;
}

int listaVazia(tLista l)
{
    return l.prim == NULL;
}

tNo *busca(tLista lista, int d)
{
    tNo *noAtual = lista.prim;
    while(noAtual != NULL)
    {
        if(noAtual->dado == d)
        return noAtual;
        noAtual = noAtual->prox;
    }
    
    return NULL;
}

void insereInicio(tLista *lista, int novoDado)
{
    tNo *novoNo = (tNo*) malloc(sizeof(tNo));
    novoNo->dado = novoDado;
    novoNo->prox = NULL;
    novoNo->prox = lista->prim;
    lista->prim = novoNo;
    lista->tam = lista->tam + 1;
}

tLista *remNo(tLista *l, int d)
{
    tNo *noAt = l->prim;
    tNo *noAn = NULL;
    
    while(noAt != NULL && noAt->dado!= d)
    {
        noAn = noAt;
        noAt = noAt->prox;
    }
    if(noAt == NULL) return NULL;
    
    if(noAt == l->prim)
        l->prim = l->prim->prox;
    else
        noAn->prox = noAt->prox;
    
    free(noAt);
    l->tam = l->tam - 1;
    
    return 1;
}

void imprLista(tLista l)
{
    printf("Lista: ");
    while(l.prim != NULL)
    {
        printf("%d\t", l.prim->dado);
        l.prim = l.prim->prox;
    }
    
    printf("\n");
}