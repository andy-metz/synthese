#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Erreur.h"
#include "ParseurFractionCORSlash.h"

#define LONGUEUR_ENTIER 50

ParseurFractionCORSlash::ParseurFractionCORSlash(ParseurFractionCOR * suivant) : ParseurFractionCOR(suivant){}


/**
reconnaît le format : nombre entier  /  nombre entier 
Convention : en cas d'échec (format non reconnu) retourne NULL
transforme le texte en Fraction
*/
Fraction * ParseurFractionCORSlash::parse1(const char * texte) const
{
const char * p = strchr(texte,'/');			// char * strchr (       char * str, int character );

if (!p) return NULL;

// on a placé le pointeur  p sur '/'

char num[LONGUEUR_ENTIER];		// pour récupérer le texte du numérateur , largement assez grand pour contenir un int en décimal


int lnum = p-texte;				// calcul du nombre de caractères (blancs inclus) du texte du numérateur


strncpy(num, texte,lnum);		// recopie du texte du numérateur


num[lnum] ='\0';		// on n'oublie pas de mettre le caractère fin de chaîne !!!



//---------------------------- la partie suivante est pourrie : j'ai fait un copié-collé : ceci doit être factorisé : il me manque une méthode qui fabrique une 
//-----------------------  Fraction à partir de 2 chaînes de caractères : idée : mettre un autre constructeur dans Fraction qui fait ce travail ----------------

int numerateur, denominateur;

int ok = sscanf(num,"%d",&numerateur);		// convertit num en un entier numerateur en ignorant les espaces

if (ok != 1)								// num n'était pas au format nombre entier
	return NULL;

ok = sscanf(p+1,"%d",&denominateur);				// convertit le texte après le '/' en un entier denominateur en ignorant les espaces

if (ok != 1)							   // den n'était pas au format nombre entier
	return NULL;
try
{
return new Fraction(numerateur,denominateur);				// si il y a un zéro au dénominateur, Fraction() lance une exception de type Erreur
}
catch(Erreur erreur)
	{
	return NULL;
	}
//ouf, c'est fini
}

#undef LONGUEUR_ENTIER