#include <stdio.h>
/* initialize the variables */
char position_a = 'A';
char position_b = 'B';
char position_c = 'C';
char position_d = 'D';
char position_e = 'E';

unsigned short int button = 1;
unsigned short int switch = 2;
unsigned short int contactor = 3;
unsigned short int thermal = 4;
unsigned short int relay = 5;

unsigned short int reply1;
char reply2;
unsigned short int repetition1 = 1;
unsigned short int repetition2 = 1;


int main () {

	printf("COMPANY WAREHOUSE\n");

	while (repetition1 == 1) {
		printf("CHOOSE OBJECT TO LOOK FOR:\n\n");	
		printf("(1) button\n");
		printf("(2) switch\n");
		printf("(3) contactor\n");
		printf("(4) thermal\n");
		printf("(5) relay\n\n");

		printf("TYPE NUMBER AND PRESS ENTER:");
		scanf("%d",&reply1);
		printf("\n\n");
	
	
		switch (reply1) {

			case 1:
				printf("you have selected button\n");
				printf("the object is located in the sector: %c\n", position_a);
				printf("\n");
			break;

			case 2:
				printf("you have selected switch\n");
				printf("the object is located in the sector: %c\n", position_b);
				printf("\n");
			break;

			case 3:
				printf("you have selected contactor\n");
				printf("the object is located in the sector: %c\n", position_c);
				printf("\n");
			break;

			case 4:
				printf("you have selected thermal\n");
				printf("the object is located in the sector: %c\n", position_d);
				printf("\n");
			break;

			case 5:
				printf("you have selected relay\n");
				printf("the object is located in the sector: %c\n", position_e);
				printf("\n");
			break;
	
			default:
				printf("you have not selected anything!\n\n");
				printf("\n");
			break;
		}
 	
		
		printf("CONTINUE WITH THE SEARCH? [S/N]:");

		while (repetition2 == 1) {

			scanf(" %c",&reply2);
			switch (reply2) {

				case 'N':
					printf("GOODBYE!\n\n");
					repetition1 = 0;
					repetition2 = 0;
				break;

				case 'n':
					printf("GOODBYE!\n\n");
					repetition1 = 0;
					repetition2 = 0;
				break;

				case 'S':
					repetition1 = 1;
					repetition2 = 0;
					printf("\n");
				break;

				case 's':
					repetition1 = 1;
					repetition2 = 0;
					printf("\n");
				break;

				default:
					printf("INVALID CHARACTER, RETRY:");
					repetition2 = 1;
				break;
			}
		}

		repetition2 = 1;

	}	
	return 0;
}
