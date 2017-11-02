#pragma once

#include "ParseurFractionCOR.h"

/**
sait reconna�tre le format :  nombre entier  %

*/
class ParseurFractionCORPourcent : public ParseurFractionCOR
{
public:
ParseurFractionCORPourcent(ParseurFractionCOR * suivant);


/**
reconna�t le format : nombre entier  %
Convention : en cas d'�chec (format non reconnu) retourne NULL
transforme le texte en Fraction
*/
Fraction * parse1(const char * texte) const;
};