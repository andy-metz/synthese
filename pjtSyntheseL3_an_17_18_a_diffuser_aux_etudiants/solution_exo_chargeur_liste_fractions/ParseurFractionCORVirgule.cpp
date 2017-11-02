#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Erreur.h"
#include "ParseurFractionCORVirgule.h"

#define LONGUEUR_ENTIER 50

ParseurFractionCORVirgule::ParseurFractionCORVirgule(ParseurFractionCOR * suivant) : ParseurFractionCOR(suivant){}


/**
reconna�t le format ( nombre entier  ,  nombre entier )
Convention : en cas d'�chec (format non reconnu) retourne NULL
transforme le texte en Fraction
*/
Fraction * ParseurFractionCORVirgule::parse1(const char * texte) const
{
const char * p = strchr(texte,',');			// char * strchr (       char * str, int character );

if (!p) return NULL;

const char * p1 = strchr(texte,'(');

if (!p1)
	return NULL;

const char * p2 = strchr(texte,')');

if (!p2)
	return NULL;

// on a plac� le pointeur p1 sur '(', le pointeur p sur ',' et le pointeur p2 sur ')'

char num[LONGUEUR_ENTIER];		// pour r�cup�rer le texte du num�rateur , largement assez grand pour contenir un int en d�cimal
char den[LONGUEUR_ENTIER];		// pour r�cup�rer le texte du d�nominateur

int lnum = p-p1-1;				// calcul du nombre de caract�res (blancs inclus) du texte du num�rateur
int lden = p2-p-1;				// calcul du nombre de caract�res (blancs inclus) du texte du d�nominateur

strncpy(num, p1+1,lnum);		// recopie du texte du num�rateur
strncpy(den,p+1,lden);			// recopie du texte du d�nominateur

num[lnum] = den[lden]='\0';		// on n'oublie pas de mettre le caract�re fin de cha�ne !!!

int numerateur, denominateur;

int ok = sscanf(num,"%d",&numerateur);		// convertit num en un entier numerateur en ignorant les espaces

if (ok != 1)								// num n'�tait pas au format nombre entier
	return NULL;

ok = sscanf(den,"%d",&denominateur);				// convertit den en un entier denominateur en ignorant les espaces

if (ok != 1)							   // den n'�tait pas au format nombre entier
	return NULL;
try
{
return new Fraction(numerateur,denominateur);				// si il y a un z�ro au d�nominateur, Fraction() lance une exception de type Erreur
}
catch(Erreur erreur)
	{
	return NULL;
	}
//ouf, c'est fini
}

#undef LONGUEUR_ENTIER