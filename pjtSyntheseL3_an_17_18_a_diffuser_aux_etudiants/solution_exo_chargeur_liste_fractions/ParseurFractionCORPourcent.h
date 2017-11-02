#pragma once

#include "ParseurFractionCOR.h"

/**
sait reconnaître le format :  nombre entier  %

*/
class ParseurFractionCORPourcent : public ParseurFractionCOR
{
public:
ParseurFractionCORPourcent(ParseurFractionCOR * suivant);


/**
reconnaît le format : nombre entier  %
Convention : en cas d'échec (format non reconnu) retourne NULL
transforme le texte en Fraction
*/
Fraction * parse1(const char * texte) const;
};