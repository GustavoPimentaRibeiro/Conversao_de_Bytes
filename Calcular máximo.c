#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	double decimal = 0;
	int i, bytes, bits;
	
	printf("\n Quantos bytes deseja converter para saber o n�mero decimal m�ximo permitido? ");
	scanf("%d", &bytes);
	
	bits = bytes * 8;
	
	printf("\n N�mero de bits: %d", bits);
	
	for(i = 0; i < bits; i ++){
		
		decimal += pow(2, i);
		
	}
	
	printf("\n\n M�ximo do decimal permitido nos bytes digitados: %.0lf", decimal);
	
}
