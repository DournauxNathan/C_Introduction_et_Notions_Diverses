#include <stdio.h>
#include <string.h>

struct Magasin{
	char nomObjet[30];
	int prixObjet;
};
typedef struct Magasin magasin;

void achat(magasin * adresseObjet) {
	(*adresseObjet).prixObjet = (*adresseObjet).prixObjet + 2;
}

int main()
{
	magasin steak = {"steak",5};

	printf("L'adresse du steak vaut: %d \n",steak);
	printf("Augmentation du prix...\n");
	
	achat(&steak);

	printf("Le steak vaut desormais %d\n",steak.prixObjet);

	return 0;
}