#pragma once
#include "ParseurFractionCOR.h"

/**
sait reconna�tre le format ( nombre entier  ,  nombre entier )

*/
class ParseurFractionCORVirgule : public ParseurFractionCOR
{
public:
ParseurFractionCORVirgule(ParseurFractionCOR * suivant);


/**
reconna�t le format ( nombre entier  ,  nombre entier )
Convention : en cas d'�chec (format non reconnu) retourne NULL
transforme le texte en Fraction
*/
Fraction * parse1(const char * texte) const;
};

