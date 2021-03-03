#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x[10] ;
    x[0]= 10;
	x[1]= 15;
	x[2]= 10;
	x[3]= 10;
	x[4]= 10;
	x[5]= 10;
	x[6]= 10;
	x[7]= 10;
	x[8]= 10;
	x[9]= 10;
	x[10]= 18;
	int i;
for(i=0;i<=10;i++){
	printf("Indice do vetor: %d\n",i);
	printf("\n**************************");
	printf("Valor do vetor %d\n",x[i]);
	printf("\n**************************");
	printf("Valor de Memoria%d\n",&x[i]);
}
	//imprimir vetores 
	/*/	
	printf("\n%d",x[0]);
	printf("\n%d",x[1]);
	printf("\n%d",x[2]);
	printf("\n%d",x[3]);
	printf("\n%d",x[4]);
	printf("\n%d",x[5]);
	printf("\n%d",x[6]);
	printf("\n%d",x[7]);
	printf("\n%d",x[8]);
	printf("\n%d",x[9]);
	printf("\n%d",x[10]);
	/*/
	//imprimir valor
	//int x;
	//x = 10
	//printf("%d",x);
	//printf("\n%d",&x);
	return 0;
}
