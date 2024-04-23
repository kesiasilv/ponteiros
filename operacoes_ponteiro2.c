#include <stdio.h>
#include <stdlib.h>
/*as operações de adição e subtração no endereço
dependem do tipo de dado que o ponteiro aponta;*/
int main(){
	int *p = 0x5dc;//1500
	char *c = 0x5dc;//1500
	
	printf("p = %d %d\n", p, c);//1500, 1500
	p++;//1504
	c++;//1501 //char ocupa apenas um bit na mémoria
	printf("p = %d %d\n", p, c);
	
}
