#include <stdio.h>
#include <stdlib.h>

int main(){
	//ponteiros podem apontar para nenhum lugar
	int *p = NULL;//o valor especial (NULL) é o endereço de nenhum lugar
	
	//apresentando
	printf("endereco p: %d\n", p);
	/*não confunda um ponteiro apontando para NULL, com um ponteiro não inicializado. 
	o primeiro possui valor fxo, enquanto um ponteiro não inicializado pode posuir qualquer valor*/
}
