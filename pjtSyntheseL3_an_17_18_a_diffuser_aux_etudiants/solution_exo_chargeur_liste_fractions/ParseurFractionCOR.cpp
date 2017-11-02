#include <stdlib.h>

#include "ParseurFractionCOR.h"


/**
parseur de fractions utilisant une chaîne de responsabilité

*/

/**
enchaîne ce maillon à suivant en le plaçant en tête
*/
ParseurFractionCOR::ParseurFractionCOR(ParseurFractionCOR * suivant):suivant(suivant) {}

/**
transforme texte en un objet Fraction

Convention : en cas d'échec (format non reconnu) retourne NULL

algo utilisé : parcourt la chaîne

*/
Fraction * ParseurFractionCOR::parse(const char * texte) const
{
Fraction * resultat;

resultat = this->parse1(texte);		// ce mailon tente de parser le texte

if (resultat)			// ce maillon a reconnu le format de texte et a obtenu une solution
	return resultat;
else					// échec de ce maillon
	if (this->suivant)		// ce maillon n'est pas le dernier de la chaîne
		return this->suivant->parse(texte);			// on confie le problème au maillon suivant
	else											// ce maillon est le dernier donc échc de la chaîne
		return NULL;
}
