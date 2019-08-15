#include <stdio.h>

struct noArvore {
	int info;
	struct noArvore* esq;
	struct noArvore* dir;
};

typedef struct noArvore no;
no* criar_no(int info, no* esq, no* dir){
	
	no* n = malloc(sizeof(no));
	
	n->info = info;
	n->esq  = esq;
	n->dir  = dir;
	
	return n;
}	 

void impArvore(no* n){
	if(n!= NULL){
	
	impArvore( n->esq);
    impArvore(n->dir);
    printf("(%d)", n->info);
}
}
void main(){
	no* nono = criar_no(1, criar_no(2, NULL, NULL),criar_no(3, NULL, NULL));
	 impArvore(nono);

}




