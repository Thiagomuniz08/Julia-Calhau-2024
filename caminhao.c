#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	int caminhoes, alqueires, viagens, inexato;
	int TONALQUEIRE = 250;
	int TONCAMINHAO = 18;
	printf("Quantos alqueires produtivos sua propriedade possui:\n");
	scanf("%d", &alqueires);
	printf("Quantos caminhões você possui:\n");
	scanf("%d", &caminhoes);
	viagens = (alqueires * TONALQUEIRE) / (caminhoes * TONCAMINHAO);
	printf("Será necessário %d viagens no máximo, para tranportar sua produção.", viagens + 1);
	return 0;
}
