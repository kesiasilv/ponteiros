#include <stdio.h>
#include <stdlib.h>
/*ponteiros podem ser comparados usando:
==, !=, >, <, >= e <= */
int main(){
	int x, y;
	int *p, *p1;
	
	p = &x;
	p1 = &y;
	
	if(p == p1){//o endereço guardado em P é igual a p1?
		printf("Ponteiros iguais!");//se sim ...
	}else{
		printf("Ponteiros diferentes!");//caso não seja igual...
	}
}
