#include <stdio.h>
#include <stdlib.h>
//é a qunatidade de asterisco (*) na declaração do ponteiro que indica o número de níveis do ponteiro 
int main(){
	int x = 10;
	int *p;
	int **p2;
	p = &x;
	p2 = &p;
	
	printf("p2: %d\n", p2);//&p -> endereço de p
	printf("*p2: %d\n", *p2);//&x -> conteudo do endereço
	printf("**p2: %d\n", **p2);//x -> conteudo do endereço do endereço
}
