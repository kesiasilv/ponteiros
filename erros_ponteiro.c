#include <stdio.h>
#include <stdlib.h>

int main(){
	/*ponteiros só podem receber o endereço de
	uma variavel do mesmo tipo do ponteiro*/
	int *p, *p1, x =10;
	float y = 20.0;
	
	p = &x;
	printf("p: %d\n", *p);//conteudo de x;
	p1 = p;
	printf("p1: %d", *p1);//conteudo de P1 que por ter sido atibuido seu valor em P que era o conteudo de x, logo seu conteúdo será igual a x.
//--->	p = &y; isso esta ERRADO! pois y é uma variável do tipo ponto flutuante(float), enquanto o ponteiro é inteiro;//
	

}
