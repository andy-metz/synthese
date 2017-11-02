#pragma once
#include "ParseurFractionCOR.h"

/**
sait reconnaître le format ( nombre entier  ,  nombre entier )

*/
class ParseurFractionCORVirgule : public ParseurFractionCOR
{
public:
ParseurFractionCORVirgule(ParseurFractionCOR * suivant);


/**
reconnaît le format ( nombre entier  ,  nombre entier )
Convention : en cas d'échec (format non reconnu) retourne NULL
transforme le texte en Fraction
*/
Fraction * parse1(const char * texte) const;
};

