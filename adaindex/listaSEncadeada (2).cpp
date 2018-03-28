#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

typedef struct lista{
    string TODO[10];
    lista *prox;

}Lista;

typedef struct prefix{
    string queries[10];
    prefix *prox1;

}Prefix;

int vazia(lista *LISTA)
{
	if(LISTA->prox == NULL)
		return 1;
	else
		return 0;
}
int vazia1(prefix *PREFIX)
{
	if(PREFIX->prox1 == NULL)
		return 1;
	else
		return 0;
}

void insereLista(Lista *LISTA)
{
	Lista *lista=(Lista *) malloc(sizeof(Lista));

    scanf("%s", &lista->TODO);

	lista->prox = NULL;

	if(vazia(LISTA))
		LISTA->prox=lista;

	else{
		Lista *tmp = LISTA->prox;

		while(tmp->prox != NULL)
			tmp = tmp->prox;

		tmp->prox = lista;
	}
}

void inserePrefix(Prefix *PREFIX)
{
	Prefix *prefix=(Prefix *) malloc(sizeof(Prefix));

    scanf("%s", &prefix->queries);

	prefix->prox1 = NULL;

	if(vazia1(PREFIX))
		PREFIX->prox1=prefix;

	else{
		Prefix *tmp = PREFIX->prox1;

		while(tmp->prox1 != NULL)
			tmp = tmp->prox1;

		tmp->prox1 = prefix;
	}
}
int BuscaElemento(const Prefix *prefix, Lista *lista){
        int i,j;
        j = 0;
        while (prefix->prox1!= NULL){
       prefix = prefix->prox1;
       j++;
    }

    for(i = 0; i < j; ++i){
        if (prefix->queries[i] == lista->TODO[i]){
            printf("achei: %s", prefix->queries);
        }
    }
}


int main(){

int N,Q,i,j,aux2,aux,k;

cin>>N>>Q;

Lista *TODO = (Lista *) malloc(sizeof(Lista));

Prefix *queries = (Prefix *) malloc(sizeof(Prefix));


    for(i=0;i<N;i++){
        insereLista(TODO);

    }
    for(i=0;i<Q;i++){
        inserePrefix(queries);

    }

    BuscaElemento(queries,TODO);
    /*
    Lista *tmp;
	tmp = TODO->prox;

	while( tmp != NULL){
		printf("%s\n", tmp->TODO);
		tmp = tmp->prox;
	}

	Prefix *tmp1;
	tmp1 = queries->prox1;

	while( tmp1 != NULL){
		printf("%s\n", tmp1->queries);
		tmp1 = tmp1->prox1;
	}


Lista *tmp;
tmp= TODO->prox;

Prefix *tmp1;
tmp1=queries->prox1;


    while(tmp1!= NULL){
        while(tmp!=NULL){
            if(tmp1->queries==tmp->TODO){printf("sim: %s",tmp1->queries);}
            else{printf("nao");}
            tmp=tmp->prox;
        }
    tmp1=tmp1->prox1;

    }
*/
}





