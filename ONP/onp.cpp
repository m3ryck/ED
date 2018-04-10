#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

class No{
    public:
    char info;
    No *prox;
    No()
    {
        prox=NULL;
    }
    No(char Info1, No* Prox1=NULL){

        info=Info1;
        prox=Prox1;
    }

};

class Pilha{

    private:
        No *Cabeca;



    public:
        Pilha()
        {
            Cabeca=NULL;
        }

        bool PilhaVazia();
        void Pop();
        void Push(char);
        int tamPilha();
        char Topo();

};

char Pilha::Topo(){ //retorna o topo da pilha
    if(!PilhaVazia()){
    return Cabeca->info;
    }

}

bool Pilha::PilhaVazia(){

        return (Cabeca==NULL);

}

void Pilha::Push(char v){ // adicionar novo elemento a pilha
      if(PilhaVazia()){
        No *novo = new No(v);
        novo->prox=Cabeca;
        Cabeca=novo;
        }else{

        No *tmp = new No(v);
        tmp->prox=Cabeca;
        Cabeca=tmp;
        }
}

void Pilha::Pop() { //

    char info = Cabeca->info;
    Cabeca = Cabeca->prox;
    }

int main ()
{
    Pilha s;
    int t,i,x;
    cin>>t;

    for(i=0;i<t;i++){
        char equa[400];
        cin>>equa;

        for(x=0;x<strlen(equa);x++){
            if(equa[x]=='(')
                s.Push(equa[x]);
                //cout<<"show: "<<equa[x]<<endl;}
            else if(equa[x]==')'){
                while(s.Topo()!='('){
                    cout<<s.Topo();
                    //cout<<"show11: "<<equa[x]<<endl;
                    s.Pop();
                    //cout<<"show22: "<<equa[x]<<endl;
                }s.Pop();}//cout<<"show33: "<<equa[x]<<endl;}
            else if(equa[x]=='+'||equa[x]=='-'||equa[x]=='*'||equa[x]=='/'||equa[x]=='^')
                s.Push(equa[x]);//cout<<"show44: "<<equa[x]<<endl;}
            else
                cout<<equa[x];}
        cout<<endl;}


}
