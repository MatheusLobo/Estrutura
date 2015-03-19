/*
Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e os dados
necessários para executar cada operação. 
Menu de opções: 
1. Somar dois números. 
2. Subtrair dois números 
3. Multiplicar dois números 
4. Dividir dois números 
5. Raiz quadrada de um número 
Digite a opção desejada.
 */
#include <math.h>
#include <stdio.h>
void calc(){
	int i;
	float soma,sub,mult,duv,raiz,a,b   ;
	printf("Somar 1 \n");
	printf("Subtrair 2\n");
	printf("Multiplicar 3\n");
	printf("Dividir 4\n");
	printf("Raiz quadrada 5\n");
	scanf("%d", &i);
	scanf("%f", &a);
	scanf("%f", &b);
	
	if (i==1){
		soma=a+b;
		printf("%f", soma);}
	if (i==2){
		sub=a-b;
		printf("%f", sub);}
	if (i==3){
		mult=a*b;
		printf("%f", mult);}
	if (i==4){
		duv=a/b;
		printf("%f", duv);}
	if (i==5){
		raiz=pow(a,b);
		printf("%f", raiz);

	}

}

int main(){
	calc();
	return 0;
}

