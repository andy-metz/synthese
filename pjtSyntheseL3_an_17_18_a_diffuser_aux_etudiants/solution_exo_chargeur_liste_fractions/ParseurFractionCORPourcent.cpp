#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Erreur.h"
#include "ParseurFractionCORPourcent.h"

#define LONGUEUR_ENTIER 50

ParseurFractionCORPourcent::ParseurFractionCORPourcent(ParseurFractionCOR * suivant) : ParseurFractionCOR(suivant){}


/**
reconna�t le format : nombre entier  % 
Convention : en cas d'�chec (format non reconnu) retourne NULL
transforme le texte en Fraction
*/
Fraction * ParseurFractionCORPourcent::parse1(const char * texte) const
{
const char * p = strchr(texte,'%');			// char * strchr (       char * str, int character );

if (!p) return NULL;

// on a plac� le pointeur  p sur '%'

char num[LONGUEUR_ENTIER];		// pour r�cup�rer le texte du num�rateur , largement assez grand pour contenir un int en d�cimal


int lnum = p-texte;				// calcul du nombre de caract�res (blancs inclus) du texte du num�rateur


strncpy(num, texte,lnum);		// recopie du texte du num�rateur


num[lnum] ='\0';		// on n'oublie pas de mettre le caract�re fin de cha�ne !!!


int numerateur;

int ok = sscanf(num,"%d",&numerateur);		// convertit num en un entier numerateur en ignorant les espaces

if (ok != 1)								// num n'�tait pas au format nombre entier
	return NULL;

return new Fraction(numerateur,100);			

}

#undef LONGUEUR_ENTIER