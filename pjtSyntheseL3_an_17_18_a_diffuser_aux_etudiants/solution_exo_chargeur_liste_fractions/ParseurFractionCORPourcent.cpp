#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Erreur.h"
#include "ParseurFractionCORPourcent.h"

#define LONGUEUR_ENTIER 50

ParseurFractionCORPourcent::ParseurFractionCORPourcent(ParseurFractionCOR * suivant) : ParseurFractionCOR(suivant){}


/**
reconnaît le format : nombre entier  % 
Convention : en cas d'échec (format non reconnu) retourne NULL
transforme le texte en Fraction
*/
Fraction * ParseurFractionCORPourcent::parse1(const char * texte) const
{
const char * p = strchr(texte,'%');			// char * strchr (       char * str, int character );

if (!p) return NULL;

// on a placé le pointeur  p sur '%'

char num[LONGUEUR_ENTIER];		// pour récupérer le texte du numérateur , largement assez grand pour contenir un int en décimal


int lnum = p-texte;				// calcul du nombre de caractères (blancs inclus) du texte du numérateur


strncpy(num, texte,lnum);		// recopie du texte du numérateur


num[lnum] ='\0';		// on n'oublie pas de mettre le caractère fin de chaîne !!!


int numerateur;

int ok = sscanf(num,"%d",&numerateur);		// convertit num en un entier numerateur en ignorant les espaces

if (ok != 1)								// num n'était pas au format nombre entier
	return NULL;

return new Fraction(numerateur,100);			

}

#undef LONGUEUR_ENTIER