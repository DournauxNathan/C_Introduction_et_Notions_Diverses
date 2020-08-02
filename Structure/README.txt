Les structures

Les strutures sont un type d'organisation. On peut déclarer une nouvelle variable avant le main.

Exemple:

strut Eleve{
	int id;
	float moyenneAlgo;
	float moyenne2D;
	char niveau;
}

Avec cette structure, on pourrait définir plusieurs élèves.

struct Eleve giselle;
giselle.id = 1;

Autre synthase si on rajoute la ligne suivante après avoir déclarer la structure:
typedef struc Eleve eleve

eleve giselle;
giselle = {__ , __ , };
