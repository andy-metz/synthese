#include <stdlib.h>

#include "ParseurFractionCOR.h"


/**
parseur de fractions utilisant une cha�ne de responsabilit�

*/

/**
encha�ne ce maillon � suivant en le pla�ant en t�te
*/
ParseurFractionCOR::ParseurFractionCOR(ParseurFractionCOR * suivant):suivant(suivant) {}

/**
transforme texte en un objet Fraction

Convention : en cas d'�chec (format non reconnu) retourne NULL

algo utilis� : parcourt la cha�ne

*/
Fraction * ParseurFractionCOR::parse(const char * texte) const
{
Fraction * resultat;

resultat = this->parse1(texte);		// ce mailon tente de parser le texte

if (resultat)			// ce maillon a reconnu le format de texte et a obtenu une solution
	return resultat;
else					// �chec de ce maillon
	if (this->suivant)		// ce maillon n'est pas le dernier de la cha�ne
		return this->suivant->parse(texte);			// on confie le probl�me au maillon suivant
	else											// ce maillon est le dernier donc �chc de la cha�ne
		return NULL;
}
