#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>


#define S struct


S no
{
    int var,x;
    S no *esq, *dir;
}*raiz = NULL,*stack[100];
int x;
void inserir(S no **raiz, int var)
{
    S no *temp;
    if( *raiz == NULL)
    {
        temp = (S no *)malloc(sizeof(S no));
        temp->var = var;
        temp->esq = temp->dir = NULL;
        *raiz = temp;

        return;
    }

    else
    {
        if(var >= (*raiz)->var)
        {
            inserir( &((*raiz)->dir) , var);
        }
        else
        {
            inserir( &((*raiz)->esq) , var);
        }
    }
}    

int procurar(S no *temp,int var)
{
	int y=0,z=0;
	S no *no_temp;
   while(temp != NULL)
   {
        no_temp = temp;
        if(var == temp->var)
            break;

        else if( var > temp->var && temp->dir != NULL)
        {
            z++;
            temp = temp->dir;
        }

        else if( var < temp->var && temp->esq != NULL)
        {
            y++;
            temp = temp->esq;
        }   
        if( no_temp == temp )
            break;
   		
 }
 x=x+y+z;
 return raiz->x = x;
}


int main()
{	
 	int i , j;

 	scanf("%i", &i);

 	while(i>0){
 		scanf("%i",&j);
 		inserir(&raiz,j);
 		procurar(raiz,j);
 		printf("%d\n",raiz->x);
 	}
 }
