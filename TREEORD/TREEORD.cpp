#include <iostream>
#include <map>
using namespace std;
class no{
public:
  int var;
  no *esq;
  no *dir;
};

int *A,*B,*C;
map<int,int> m1;
map<int,int> m2;
map<int,int> m3;

bool criarArvore( no *curr, int inStart, int inEnd, int preStart, int preEnd ){
  if(inEnd-inStart!=preEnd-preStart)
    return false;
  bool b1,b2;
  b1=b2=true;
  curr->var = A[preStart];
  curr->esq = NULL;
  curr->dir = NULL;
  if(preStart==preEnd)
    return true;
  if( m3[A[preStart]]!=inStart ){
    curr->esq= new no;
    b1 = criarArvore(curr->esq,inStart,m3[A[preStart]]-1,preStart+1,m1[C[m3[A[preStart]]-1]]);
  }
  if(m3[A[preStart]]!=inEnd){
    curr->dir = new no;
    b2 = criarArvore(curr->dir,m3[A[preStart]]+1,inEnd,m1[C[m3[A[preStart]]+1]],preEnd);
  }
  return b1 && b2;
}

bool posOrdem(no *curr){
  static int cont=0;
  bool b1,b2;
  b1=b2=true;
  if(curr->esq!=NULL)
    b1=posOrdem(curr->esq);
  if(curr->dir!=NULL)
    b2=posOrdem(curr->dir);
  return curr->var==B[cont++] && b1 && b2;
}

int main(){
  int N,i,j,k;
  no *raiz;
  cin>>N;
  A = new int[N];
  B = new int[N];
  C = new int[N];
  for(i=0;i<N;i++){
    cin>>A[i];
    m1[A[i]]=i;
  }
  for(i=0;i<N;i++){
    cin>>B[i];
    m2[B[i]]=i;
  }
  for(i=0;i<N;i++){
    cin>>C[i];
    m3[C[i]]=i;
  }
  raiz = new no;
  if(!criarArvore(raiz,0,N-1,0,N-1)){
    cout<<"no"<<endl;
    return 0;
  }
  if(posOrdem(raiz))
    cout<<"yes"<<endl;
  else
    cout<<"no"<<endl; 
  return 0;
}