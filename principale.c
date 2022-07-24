#include <stdio.h>

char posizione_a = 'A';
char posizione_b = 'B';
char posizione_c = 'C';
char posizione_d = 'D';
char posizione_e = 'E';

unsigned short int pulsante = 1;
unsigned short int interruttore = 2;
unsigned short int contattore = 3;
unsigned short int termico = 4;
unsigned short int rele = 5;

unsigned short int risposta1;
char risposta2;
unsigned short int ripetizione1 = 1;
unsigned short int ripetizione2 = 1;


int main () {

	printf("MAGAZZINO AZIENDA\n");

	while (ripetizione1 == 1) {
		printf("SCEGLIERE OGGETTO DA CERCARE:\n\n");	
		printf("(1) pulsante\n");
		printf("(2) interruttore\n");
		printf("(3) contattore\n");
		printf("(4) termico\n");
		printf("(5) rele\n\n");

		printf("DIGITARE NUMERO E PREMERE INVIO:");
		scanf("%d",&risposta1);
		printf("\n\n");
	
	
		switch (risposta1) {

			case 1:
				printf("hai selezionato pulsante\n");
				printf("l'oggetto si trova nel settore: %c\n", posizione_a);
				printf("\n");
			break;

			case 2:
				printf("hai selezionato interruttore\n");
				printf("l'oggetto si trova nel settore: %c\n", posizione_b);
				printf("\n");
			break;

			case 3:
				printf("hai selezionato interruttore\n");
				printf("l'oggetto si trova nel settore: %c\n", posizione_c);
				printf("\n");
			break;

			case 4:
				printf("hai selezionato interruttore\n");
				printf("l'oggetto si trova nel settore: %c\n", posizione_d);
				printf("\n");
			break;

			case 5:
				printf("hai selezionato interruttore\n");
				printf("l'oggetto si trova nel settore: %c\n", posizione_e);
				printf("\n");
			break;
	
			default:
				printf("non hai selezionato nulla!\n\n");
				printf("\n");
			break;
		}
 	
		
		printf("CONTINUARE CON LA RICERCA? [S/N]:");

		while (ripetizione2 == 1) {

			scanf(" %c",&risposta2);
			switch (risposta2) {

				case 'N':
					printf("ARRIVEDERCI\n\n");
					ripetizione1 = 0;
					ripetizione2 = 0;
				break;

				case 'n':
					printf("ARRIVEDERCI\n\n");
					ripetizione1 = 0;
					ripetizione2 = 0;
				break;

				case 'S':
					ripetizione1 = 1;
					ripetizione2 = 0;
					printf("\n");
				break;

				case 's':
					ripetizione1 = 1;
					ripetizione2 = 0;
					printf("\n");
				break;

				default:
					printf("CARATTERE NON VALIDO, RIPROVARE:");
					ripetizione2 = 1;
				break;
			}
		}

		ripetizione2 = 1;

	}	
	return 0;
}