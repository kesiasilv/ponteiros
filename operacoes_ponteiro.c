#include <stdio.h>
#include <stdlib.h>

int main(){
	/*sobre o valor do endereço armazenado por um ponteiro
	podemos apenas somar e subtrair valores = inteiro;*/
	int *p = 0x5DC; //valor deste endereço esta em hexadecimal
	
	printf("p: %d\n", p);//este endereço equivale a 1500;
	p++;
	printf("p: %d\n", p);//como um numero inteiro possui 4 bits, quando se incrementa um ele irá somar 4, valor apresentado = 1504
	
	p += 15;//calculo realizado 15 x 4 = 60. 1504 + 60 = 1564; 
	printf("p: %d\n", p);//valor apresentado 1564
	
	p -= 2;//calculo realizdo 2 x 4 = 8. 1564 - 8 = 1556;
	printf("p: %d\n", p);//valor apresentado 1556;
}
