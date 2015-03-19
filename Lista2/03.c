
#include <stdio.h>
//3. Faça um programa que receba dois números e mostre o maior.
void maiormenor(){
		int a,b,c;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a>b){
		printf("A é o maior %d\n", a);
		c=a;}else{
	if (b>a){
		printf("B é o maior %d\n", b);
		c=b;}}
}
int main(){
	maiormenor();
	return 0;
}

