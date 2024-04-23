#include <stdio.h>
#include <stdlib.h>
//ponteiro é um tipo especial de variavel que armazena endereço de memória
//forma geral de atribuição: tipo_do_ponteiro *nome_do_ponteiro;
//o asterisco determina que aquela variavel esta guardando o endereco daquele tipo;
int main(){
  //ponteiros não inicializados apontam  para lugares indefinidos, por isso iniciamos apontando para algum lugar (neste caso para o endereço de memória x);
	int x;
	int *p;//aqui esta sendo declarada um ponteiro especifico para inteiros (int)

	x = 10;//variavel
	p = &x;//ponteiro apontando para o endereço de x;
	
	printf("valor x: %d\n", x);//apresentando o conteudo de x
	printf("valor p: %d\n", p);//apresentando o endereço de x;
	
	*p = 12;//alterando o conteudo da posição de memória
	printf("novo valor p: %d\n", *p);//novo conteudo
	printf("mesmo endereco: %d\n", p);//continua o mesmo endereço, pois, modificamos apenas seu conteúdo;
  
  //para ver mais atribuições de ponteiros de vários tipos, acesse o livro linguagem C completa e desocomplicada de André Backes, pag:320; 
	
}
