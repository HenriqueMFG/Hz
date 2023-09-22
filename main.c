#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int b,alt,a,p;
	printf("Digite uma base e uma altura:");
	scanf("%d %d",&b,&alt);
	a=b*alt;
	p=b+b+alt+alt;
	printf("A area e:%d",a);
	printf("\nO perimetro e:%d",p);
	return 0;
}
