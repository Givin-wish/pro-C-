/*
 
 
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int NewAdventure();
int ChardementArmes();
void DureDevie();


int main(void)
{

	int isApplicationRunning = 1;
	int PlayerChoice = 1;





	printf("Main Menu\n\n 1) New Adventure \n 2) Load Adventure \n 3) Options \n 4 Quit\n");


	// input
	printf("Quel est votre choix ?");

	scanf("%d", &PlayerChoice);

	// switch
	switch ( PlayerChoice) 
	{
	case 1:
		printf(" News Avdenture");
			break;

	case 2:
		printf("Load Adventure");
		break;

	case 3:
		printf("Options");
			break;

	case 4:
		printf("Quit");
		break;

	default:
		printf("Choix invalid. Veuillez réessayer.");
		break;
	}

	return 0;
}