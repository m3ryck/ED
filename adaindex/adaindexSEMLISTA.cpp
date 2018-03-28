#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){

int N,Q,i,j,aux2,aux,k;
cin>>N>>Q;

char TODO[N][10];
char queries[Q][10];

    for(i=0;i<N;i++){
        cin>>TODO[i];
    }
    for(i=0;i<Q;i++){
        cin>>queries[i];
    }


    for(i=0;i<Q;i++){
            aux2=0;
        for(j=0;j<N;j++){
                aux=0;
            for(k=0;k<strlen(queries[i]);k++){
                if(queries[i][k]==TODO[j][k])
                    aux++;
                if(aux==strlen(queries[i])){
                    aux2++;
                }
            }
        }
        cout<<aux2<<endl;
    }

}
