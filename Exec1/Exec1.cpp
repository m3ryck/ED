#include <stdio.h>
#include <stdlib.h>
#include<vector>
#include<cstdio>
#include <String>
#include <cstddef>
#include <iostream>

using namespace std;

int main(){

vector <int> printArray;

int aux = 999;
int x,y;
int i,j=0;

scanf("%d",&x);// tamanho do array
int S[x];
    for(i=0;i<x;i++){// recebendo valor do array
        scanf("%d",&S[i]);
    }


scanf("%d",&y); //recebendo tamanho do array
int Q[y];
    for(i=0;i<y;i++){     //recebendo os valores do array
        scanf("%d",&Q[i]);
    }


for(i=0;i<x;i++){
    for(j=0;j<y;j++){
        aux=i;
        if(S[i]==Q[j]){
            aux = 999;
            break;
        }
    }
    if(aux!=999)
        printArray.push_back(S[i]);

}

for (i=0;i<printArray.size();i++)
        printf("%d ",printArray[i]);


return 0;

}
