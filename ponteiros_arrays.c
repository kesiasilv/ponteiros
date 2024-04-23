#include <stdio.h>
#include <stdlib.h>
//ponteiros e array
 int main(){
 	int i, v[5] = {1,2,3,4,5};
 	int *p;
 	p = &v;
 	
 	for(i=0; i<5; i++){
 		printf("%d \n", p[i]);
	 }
 }
