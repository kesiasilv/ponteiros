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
 	
 	printf("ponteiro generico: %d", pg);
 	printf("ponteiro do tipo inteiro: %d", p);
 	
 }
