#include <stdio.h>

int main(){
	//Este é um comentário
	/*Este comentario é multilinha, %d é um especificador de formato que indica: “coloque aqui um valor inteiro”. \n é um caractere especial que pula uma linha (equivale ao Enter).  
*/
	//imprime o ASCII correspondente

	char myletter = 'A';
	int numero = 5;
	double numqueb = 3.99;
	int x = 8, y = 17, o = 21;
	char p = 65;
	char mytext[] = "Hellow";

	printf("Minha letra eh: %c\n", myletter);
	printf("Meu numero eh: %d\n", numero);
	printf("Um numero quebrado:%lf\n", numqueb);
	printf("teste\n");
	printf("Multiplas variaveis: %d\n", x + y + o);
	printf("%c\n", p); 
	printf("%s\n", mytext);
	return 0;
}