#include <stdio.h>
#include <time.h>
//
#include<iostream>
//

//GLOBAL VARIABLE
char response;

int main(void){
	
	do{
		int cont;
		int vector[10];
		long inicio_retardo, final_retardo, duracion_retardo, tiempo_total;
		int tiempo = 0;
		
		
		do{
			printf("\nIndicar el tiempo de la alarma en segundos: ");
			scanf("%d", &tiempo);
			if(tiempo < 0){
				printf("\nDebe ser un numero positivo.");
			}
		} while(tiempo < 0);		
		
		
		for(cont=1;cont<=tiempo;cont++){
	
			printf("\n %d", cont);
			inicio_retardo=clock();
			do{
				final_retardo = clock();
				duracion_retardo = final_retardo - inicio_retardo;
			} while(duracion_retardo < 1000);
			
		}
		printf("\a");
		printf("\nTIEMPO CUMPLIDO!!");
		
		//VERIFY IF YOU WANT TO KEEP USING IT
		printf("\nDesea utilizar de nuevo? (y/n) ");
		fflush(stdin);
		scanf("%c", &response);
	}while(response != 'n');
		
	return 0;
}
