#include <stdio.h>
#include <stdlib.h>
#include<vector>
#include<cstdio>

using namespace std;

int main(){

vector<int> printArray;

int i,j=0;
int x,y;

scanf("%d",&x);// tamanho do array
int S[x];
    for(i=0;i<x;i++)     // recebendo valor do array
        scanf("%d",&S[i]);


scanf("%d",&y); //recebendo tamanho do array
int Q[y];
    for(i=0;i<y;i++)     //recebendo os valores do array
        scanf("%d",&Q[i]);

int aux=0,aux2;
for(i=0;i<x;i++){

    while(j!=y){
        if(S[i]==Q[j]){
            j++;
            printf("teste1 \n");
            break;
        }
        j++;
        printArray.push_back(S[i]);

       /* printf("teste2 \n");
        if(S[i]!=Q[j] && j == y){
            printf("teste3 \n");
            printf("%d ",S[i]);
            aux=0;
        }*/

    }

}










return 0;

}
