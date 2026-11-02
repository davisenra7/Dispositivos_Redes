#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
 	int estado[10];
    int n;
    int x;
    int ativos = 0;
    int inativos = 0;
    float porcentagem;

     printf("--- Radar de Dispositivos da Rede ---\n");

     printf("Digite o numero de dispositivos (1 a 10): ");
     scanf("%d", &n);
     
     
    	while (n < 1 || n > 10) {
            printf("Quantidade invalida! Digite de 1 a 10: ");
        	scanf("%d", &n);
    }


    	for (x = 0; x < n; x++) {
       		printf("Dispositivo %d (1 = ativo / 0 = inativo): ", x + 1);
        	scanf("%d", &estado[x]);

        		while (estado[x] != 0 && estado[x] != 1) {
            		printf("Estado invalido! Digite 0 ou 1: ");
            		scanf("%d", &estado[x]);
        		}
    	}


    	for (x = 0; x < n; x++) {
        	if (estado[x] == 1) {
            	ativos++;
        	}
        	
        	else {
            	inativos++;
        	}
    	}

    	porcentagem = (ativos * 100.0) / n;

     printf("\n--- Painel da Rede ---\n");
     printf("Dispositivos ativos: %d\n", ativos);
     printf("Dispositivos inativos: %d\n", inativos);
     printf("Disponibilidade: %.1f%%\n", porcentagem);

    	if (inativos >= 2) {
        	printf("ALERTA: 2 ou mais dispositivos indisponiveis!\n");
    	}
    
    	else {
        	printf("Rede sem alerta.\n");
    	}

    return 0;
}
