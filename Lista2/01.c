//A nota final de um estudante é calculada a 
//partir de três notas atribuídas, respectivamente, a um
//trabalho de laboratório, a uma avaliação
//semestral e a um exame final. A média das três notas 
//mencionadas obedece aos pesos a seguir:
#include <stdio.h>
void notas(){
	float x,y,z,notas;
		printf("Digite as notas, TL AS EF");
	scanf("%f", &x);
	scanf("%f", &y);
	scanf("%f", &z);
notas=(x*2+y*3+z*5)/3;
	if (notas>8 && notas<=10){
			printf("A");}
				if (notas>7 && notas<=8){
			printf("B");}
						if (notas>6 && notas<=7){
			printf("C");}
						if (notas>5 && notas<=6){
			printf("D");}
						if (notas>0 && notas<=5){
			printf("F");}
			
int main(){
	notas();

	
	return 0;		

}
