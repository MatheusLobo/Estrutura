//Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto
//número que não siga essa regra. Mostre, em seguida, os quatro números em ordem decrescente. 
//Suponha que o usuário digitará quatro números diferentes.
#include <stdio.h>
void numeros(){
	int a,b,c,z;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &z);
		if (c<z){
			printf ("%d%d%d%d",a, b, c, z);
		}
			if (b<z){
				if (c>z){
						printf ("%d%d%d%d",a, b, z, c);}}
				if (a<z) {
						if (b>z){
							printf ("%d%d%d%d",a, z, b, c);
						}}
				if (a>z){
					printf ("%d%d%d%d",z, a, b, c);
				}}
						
	

int main()
{
	numeros();
	return 0;
}

