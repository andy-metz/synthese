#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Erreur.h"
#include "ParseurFractionCORSlash.h"

#define LONGUEUR_ENTIER 50

ParseurFractionCORSlash::ParseurFractionCORSlash(ParseurFractionCOR * suivant) : ParseurFractionCOR(suivant){}


/**
reconna�t le format : nombre entier  /  nombre entier 
Convention : en cas d'�chec (format non reconnu) retourne NULL
transforme le texte en Fraction
*/
Fraction * ParseurFractionCORSlash::parse1(const char * texte) const
{
const char * p = strchr(texte,'/');			// char * strchr (       char * str, int character );

if (!p) return NULL;

// on a plac� le pointeur  p sur '/'

char num[LONGUEUR_ENTIER];		// pour r�cup�rer le texte du num�rateur , largement assez grand pour contenir un int en d�cimal


int lnum = p-texte;				// calcul du nombre de caract�res (blancs inclus) du texte du num�rateur


strncpy(num, texte,lnum);		// recopie du texte du num�rateur


num[lnum] ='\0';		// on n'oublie pas de mettre le caract�re fin de cha�ne !!!



//---------------------------- la partie suivante est pourrie : j'ai fait un copi�-coll� : ceci doit �tre factoris� : il me manque une m�thode qui fabrique une 
//-----------------------  Fraction � partir de 2 cha�nes de caract�res : id�e : mettre un autre constructeur dans Fraction qui fait ce travail ----------------

int numerateur, denominateur;

int ok = sscanf(num,"%d",&numerateur);		// convertit num en un entier numerateur en ignorant les espaces

if (ok != 1)								// num n'�tait pas au format nombre entier
	return NULL;

ok = sscanf(p+1,"%d",&denominateur);				// convertit le texte apr�s le '/' en un entier denominateur en ignorant les espaces

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