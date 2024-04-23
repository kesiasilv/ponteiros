#include <stdio.h>
#include <stdlib.h>

 int main(){
 	/*ponteiro generico: aponta para todos os tipos de 
	 dados diferentes ou que ainda serao criados*/
	 //forma gereal: void *nome_ponteiro;
 	void *pg;
 	int *p, v = 10;
 	pg = &v;
 	p = &v;
 	
 	printf("ponteiro generico: %d\n", pg);
 	printf("ponteiro do tipo inteiro: %d\n", p);
 	
 	/*para acessar o conteúdo é preciso coverter o ponteiro genérico
 	para o tipo de ponteiro no qual se deseja trbalhar;*/
 	//printf("conteudo: %d", *pg); //ERRO
 	
 	printf("conteudo pg: %d\n", *(int*)pg);
 	printf("conteudo p: %d", *p);
 }
