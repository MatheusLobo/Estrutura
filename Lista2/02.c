//2. Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a
//mensagem constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a 
//nota que deverão tirar para serem aprovados, considerando que a média exigida é 6,0. 
//Média Aritmética Mensagem
//0 a 3 Reprovado
//3 a 7 Exame 
//7 a 10 Aprovado
#include <stdio.h>
void aluno(){
	int n1,n2,n3;
int total;	
scanf("%d", &n1);
scanf("%d", &n2);
scanf("%d", &n3);
total=(n1+n2+n3)/3;
 if (total>=0 && total<3){
		printf("Reprovado");}
 if (total>=3 && total<7){
	 printf("Exame");}
 if (total>=7 && total<=10){
	 printf("Aprovado");}

}

int main(int argc, char **argv)
{
	aluno();
	return 0;
}


