#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Erreur.h"
#include "ParseurFractionCORVirgule.h"

#define LONGUEUR_ENTIER 50

ParseurFractionCORVirgule::ParseurFractionCORVirgule(ParseurFractionCOR * suivant) : ParseurFractionCOR(suivant){}


/**
reconnaît le format ( nombre entier  ,  nombre entier )
Convention : en cas d'échec (format non reconnu) retourne NULL
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

// on a placé le pointeur p1 sur '(', le pointeur p sur ',' et le pointeur p2 sur ')'

char num[LONGUEUR_ENTIER];		// pour récupérer le texte du numérateur , largement assez grand pour contenir un int en décimal
char den[LONGUEUR_ENTIER];		// pour récupérer le texte du dénominateur

int lnum = p-p1-1;				// calcul du nombre de caractères (blancs inclus) du texte du numérateur
int lden = p2-p-1;				// calcul du nombre de caractères (blancs inclus) du texte du dénominateur

strncpy(num, p1+1,lnum);		// recopie du texte du numérateur
strncpy(den,p+1,lden);			// recopie du texte du dénominateur

num[lnum] = den[lden]='\0';		// on n'oublie pas de mettre le caractère fin de chaîne !!!

int numerateur, denominateur;

int ok = sscanf(num,"%d",&numerateur);		// convertit num en un entier numerateur en ignorant les espaces

if (ok != 1)								// num n'était pas au format nombre entier
	return NULL;

ok = sscanf(den,"%d",&denominateur);				// convertit den en un entier denominateur en ignorant les espaces

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