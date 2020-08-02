#include <stdio.h>

struct Personnage
{
	int vie;
	int pointMagie;
};




int main()
{
	int choixHeros;

	struct Personnage chevalier;
	chevalier.vie = 50;
	chevalier.pointMagie = 50;

	struct Personnage mage;
	mage.vie = 40;
	mage.pointMagie = 80;

	struct Personnage archer;
	archer.vie = 25;
	archer.pointMagie = 30;

	struct Personnage barbare;
	barbare.vie = 80;
	barbare.pointMagie = 20;

	printf("Paladin [1] ou Mage [2] ou Archer [3] ou Barbare [4] \n \n");
	printf("Choissisez votre Heros: ");
	scanf("%d", &choixHeros);
	printf("\n");

	//Choix du héros
	switch (choixHeros)
	{
		case 1 : 
			printf("Vous etes le paladin \n \n");
			printf("_______________________________\n");
			printf("Caracteristique du heros \n");
			printf("Vie: %d \n", chevalier.vie);
			printf("Magie: %d \n",  chevalier.pointMagie);
			printf("_______________________________\n");
			break;

		case 2 :
			printf("Vous etes le mage \n \n");
			printf("_______________________________\n");
			printf("Caracteristique du heros \n");
			printf("Vie: %d \n", mage.vie);
			printf("Magie: %d \n",  mage.pointMagie);
			printf("_______________________________\n");
			break;
		case 3 :
			printf("Vous etes l'archer \n \n");
			printf("_______________________________\n");
			printf("Caracteristique du heros \n");
			printf("Vie: %d \n", archer.vie);
			printf("Magie: %d \n", archer.pointMagie);
			printf("_______________________________\n");
			break;
		case 4 :
			printf("Vous etes le barbare \n \n");
			printf("_______________________________\n");
			printf("Caracteristique du heros \n");
			printf("Vie: %d \n", barbare.vie);
			printf("Magie: %d \n",  barbare.pointMagie);
			printf("_______________________________\n");
			break;
	}
	return 0;
}