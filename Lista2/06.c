//Faça um programa que receba um número inteiro e verifique se é par ou ímpar.
#include <stdio.h>

void parimpar(int a){
	   if (a%2==0){
		printf("par\n");

	   }else{
	   	printf("impar\n");
	   }
}
int main() {
	int n=0;
    scanf("%d", &n);    
    parimpar(n);        
	return 0; 
}
