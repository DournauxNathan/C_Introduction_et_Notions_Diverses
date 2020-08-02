#include <stdio.h>
#include <string.h>

int main()
{
	int choixNom;

	char maChaine1[8] = "Bonjour";
	char nomUtilisateur[15];
	char newName[15];

	char changeNom[15] = "Sylvie";

	printf("\n");
	printf("Chargement de la session\n\n");
	printf("------------------------\n\n");
	

	printf("%s Utilisateur \n\n", maChaine1);

	printf("Comment t'appelle-tu ?\n\n");

	printf("Veuillez entrer votre prenom: ");
	scanf("%s", nomUtilisateur);
	printf("\n");
	printf("Enchante %s, je suis ravie de faire votre connaissance \n", nomUtilisateur);
	printf("Je suis Gl4D0S, je vais vous accompagne durant cette session de programmation \n\n");

	printf("Dites-moi voulez-vous changer de prenom ? \n\n");

	printf("Oui [1]    Non{2} \n\n");
	scanf("%d", &choixNom);

	if (choixNom == 1)
	{
		printf("Oh tres bien ! Alors veuillez entrez un nouveau nom\n");
		scanf("%s", newName);
		printf("Votre nouveau nom est %s \n", newName);
	}
	else if (choixNom == 2)
	{
		strcpy(nomUtilisateur, changeNom);
		printf("\n");
		printf("Voila, votre prenom est maintenant %s. Je vous appelerais desormais %s \n", nomUtilisateur, nomUtilisateur);
	}



	//1er chaine prend la 
}