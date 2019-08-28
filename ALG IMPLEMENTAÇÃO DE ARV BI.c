#include <stdio.h>
#include <stdlib.h>

struct noArvovre{
  char info;
  struct noArvovre* esq;
  struct noArvovre* dir;
};

typedef struct noArvovre no;

no* criar_no(char info,no* esq, no* dir){
	no* n = malloc(sizeof(no ));
	n->info = info;
	n->esq = esq;
	n->dir = dir;
return n;
}

void emordem(no* n){
	if (n !=NULL){
	emordem(n ->esq);
	printf("%c", n->info );
    emordem(n->dir);
    }
}

void posordem(no* n){
	if (n !=NULL){

	posordem(n->esq);
	posordem(n->dir);
	printf("%c", n->info );
    }
}

void preordem(no* n){
	if (n !=NULL){
	printf("%c", n -> info );
	preordem(n->esq);
	preordem(n->dir);
    }
}
void imprimirArv(no* n){
	if (n !=NULL){
	printf("%c", n->info );
	imprimirArv(n->esq);
	imprimirArv(n->dir);
    }
}

int buscaValor (no* n, char valor){

if(n == NULL){
   return 0;
   }else{

    return (n->info == valor) || (buscaValor(n->esq, valor)) || (buscaValor(n->dir, valor));
   }
}

void main(){
	no* nono = criar_no('D',criar_no(('B'),criar_no('A',NULL,NULL),criar_no('C',NULL,NULL)), criar_no(('F'),criar_no('E',NULL,NULL),criar_no('G',NULL,NULL)));
   
    printf("\n Em Ordem: ");
	emordem(nono);
	printf("\n Pos Ordem: ");
	posordem(nono);
	printf("\n Pre Ordem: ");
	preordem(nono);
	 int resultado = buscaValor(nono,'A');
	printf("\n%d", resultado);
}
