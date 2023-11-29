#include <stdio.h>
#include <locale.h>

void torresHanoi(int n, char origem, char destino, char auxiliar) {
	//Esse é nosso caso base
	if(n==1) {
		printf("\nMova o disco 1 da base %c para a base %c", origem, destino);
		return;
	}
	
	/*Mover o disco n-1 de A para B usando C de auxiliar*/
	torresHanoi(n-1, origem, auxiliar, destino);
	/*Mover os discos restantes de A para C*/
	printf("\nMova o disco %d da base %c para a base %c", n, origem, destino);
	/*Mover os discos n-1 de B para C usando A de auxiliar*/
	torresHanoi(n-1, auxiliar, destino, origem);	
}

int main() {
	setlocale(LC_ALL, "");
	
	int numDiscos;
	printf("SOLUÇÃO DO PROBLEMA TORRES DE HANOI\n");
	printf("Digite a quantidade de discos: ");
	fflush(stdin);
	scanf("%d", &numDiscos);
	printf("Para resolver a torre de Hanois faça:\n\n");
	torresHanoi(numDiscos, 'A', 'B', 'C');
	printf("\n");
	system("pause");
	
	return 0;
}
